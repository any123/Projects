using System;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.Services;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Configuration;


namespace FIRST
{
    public partial class MyProfile : System.Web.UI.Page
    {
        string user = string.Empty;



        protected void Page_Load(object sender, EventArgs e)
        {
            string cur_user = Request.QueryString["curr_user"];
            string main_users = Request.QueryString["main_user"];

            if (main_users != cur_user)
            {
               
                Upload.Visible = false;
            }
            else
            { Upload.Visible = true; }
            
            if (Session["username"] == null)
            {
                Response.Redirect("login.aspx");
            }
            else if (!string.IsNullOrEmpty(Request.QueryString["test"]))
            {
                user = Request.QueryString["test"];
            }  
           
                string temp = "Hi" + main_users;
                        
                string firstVariable = string.Empty;
                string secondVariable = string.Empty;
               
                try
                {

                    using (SqlConnection connection = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString))
                    {
                        string query = "Select Username, Email from [register] where Username= '" + cur_user + "'  ";
                        using (SqlCommand command = new SqlCommand(query, connection))
                        {
                            connection.Open();
                            using (SqlDataReader reader = command.ExecuteReader())
                            {
                                while (reader.Read())
                                {
                                    firstVariable = reader[0].ToString();
                                    secondVariable = reader[1].ToString();
                                }
                            }
                        }
                    }

                    username.Text = firstVariable;
                    email.Text = secondVariable;
                } catch (Exception ex)
                {
                    Response.Redirect("Register.aspx");
                }


                SqlConnection conn = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
                conn.Open();

                bool image = true; string check = null;
                string q = "select count(*) from Image_Database where Username='" + cur_user + "'   AND image ='" + check + " ' ";

                using (SqlCommand cmd = new SqlCommand(q, conn))
                {
                    cmd.Parameters.AddWithValue("@uname", cur_user);
                    image = (int)cmd.ExecuteScalar() > 0;
                }
                conn.Close();

                if (!image)  // image  exist
                {
                    conn.Open();
                    Image1.ImageUrl = "ImageHandler.ashx?username=" + cur_user;
                    conn.Close();

                }
                else
                {
                    string filename =Server.MapPath("~/Images/photo.png");

                    //convert the image into the byte  
                    byte[] imageByte = System.IO.File.ReadAllBytes(filename);


                    using (SqlConnection connection = new SqlConnection())
                    {
                        connection.ConnectionString = ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString;

                        connection.Open();
                        SqlCommand cmd = new SqlCommand();
                        cmd.Connection = connection;

                        string commandText = "UPDATE Image_Database SET image=@image where Username= '" + cur_user + "'  ";

                        cmd.CommandText = commandText;
                        cmd.CommandType = System.Data.CommandType.Text;

                        cmd.Parameters.Add("@image", System.Data.SqlDbType.VarBinary);
                        cmd.Parameters["@image"].Value = imageByte;

                        cmd.ExecuteNonQuery();
                        cmd.Dispose();
                        Image1.ImageUrl = "ImageHandler.ashx?username=" + cur_user;

                        connection.Close();

                    }
                }
            
                     SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
                    con.Open();

            bool exist = false; int z = 1;
            string qa = "select count(*) from friends where Username='" + main_users + "' and  Friends ='" + cur_user + " '  AND Value ='" + z + " ' ";
                                   
            using (SqlCommand cmd = new SqlCommand(qa, con))
            {
               // cmd.Parameters.AddWithValue("@uname", username.Text);
                exist = (int)cmd.ExecuteScalar() > 0;
            }
            con.Close();

            if (exist)
            {
                con.Open();
                Friend_Request.Visible = false;

                con.Close();

            }
            else
            {
                if (cur_user != main_users)
                    Friend_Request.Visible = true;
                else
                    Friend_Request.Visible = false;
            }     
            
        }

        protected void Edit_Click(object sender, System.EventArgs e)
        {

            string cur_user = Request.QueryString["curr_user"];
            string main_users = Request.QueryString["main_user"];

            if (main_users == cur_user)
            {
                Final_Upload.Visible = true;
                FileUpload1.Visible = true;
            }
           
            
        }

        protected void Final_Upload_Click(object sender, System.EventArgs e)
        {

            if (!string.IsNullOrEmpty(Request.QueryString["test"]))
            {
                user = Request.QueryString["test"];
            }

            if (!FileUpload1.HasFile) //Validation  
            {
                Response.Write("No file Selected"); return;
            }
            else
            {
                string filename = FileUpload1.PostedFile.FileName;

                //convert the image into the byte  
                byte[] imageByte = System.IO.File.ReadAllBytes(filename);


                using (SqlConnection connection = new SqlConnection())
                {
                    connection.ConnectionString = ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString;

                    connection.Open();
                    SqlCommand cmd = new SqlCommand();
                    cmd.Connection = connection;

                    string commandText = "UPDATE Image_Database SET image=@image where Username= '" + username.Text + "'  ";

                    cmd.CommandText = commandText;
                    cmd.CommandType = System.Data.CommandType.Text;

                    cmd.Parameters.Add("@image", System.Data.SqlDbType.VarBinary);
                    cmd.Parameters["@image"].Value = imageByte;

                    cmd.ExecuteNonQuery();
                    cmd.Dispose();
                    connection.Close();





                }
            }   

            Image1.ImageUrl = "ImageHandler.ashx?username=" + username.Text;
            Response.Write("Data has been Added");
           // Response.Redirect("MyProfile.aspx?main_user=" + user + "&curr_user=" + TextBox1.Text);
        }


        protected void Search_Click(object sender, EventArgs e)
        {

            string cur_user = Request.QueryString["curr_user"];
            string main_users = Request.QueryString["main_user"];

            SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
            con.Open();

           // "Select count(*) from [register] where Username= '" + username.Text + "'  ", com)
            bool exist = false;
            using (SqlCommand cmd = new SqlCommand("Select count(*) from [register] where Username= @uname", con))
            {
                cmd.Parameters.AddWithValue("@uname", TextBox1.Text);
                exist = (int)cmd.ExecuteScalar() > 0;
            }
            con.Close();

            if (exist)
            {
                con.Open();
                Response.Redirect("MyProfile.aspx?main_user=" + main_users + "&curr_user=" + TextBox1.Text);

            }
            else
            {
                TextBox1.Text = "";
            }
            con.Close();
        }



        protected void logout_Click(object sender, EventArgs e)
        {
            Session.Clear();
            Application.Clear();
            Response.Redirect("~/login.aspx");
        }

        protected void current_user_Click(object sender, EventArgs e)
        {
            string cur_user = Request.QueryString["curr_user"];
            string main_users = Request.QueryString["main_user"];
            Response.Redirect("register_manage.aspx?test=" + main_users);
        }

        protected void Friend_Request_Click(object sender, System.EventArgs e)
        {
            string cur_user = Request.QueryString["curr_user"];
            string main_users = Request.QueryString["main_user"];


            SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
            con.Open();


            using (SqlCommand cmd = new SqlCommand("insert into friends (Username,Friends,Value) values (@uname, @friend, @value) ", con))
            {
                int val = 0;
                cmd.Parameters.AddWithValue("@uname", cur_user);
                cmd.Parameters.AddWithValue("@friend", main_users);
                cmd.Parameters.AddWithValue("@value", val);

                cmd.ExecuteNonQuery();
            }
            Friend_Request.Visible = false;
            MessageBoxShow("Friend Request sent");
            
            con.Close();
        }

        private void MessageBoxShow(string message)
        {
            this.AlertBoxMessage.InnerText = message;
            this.AlertBox.Visible = true;
         

        }

        protected void chat_Click(object sender, System.EventArgs e)
        {
            string main_users = Request.QueryString["main_user"];
            Response.Redirect("chat.aspx?main_user=" + main_users);
        }
    }
}