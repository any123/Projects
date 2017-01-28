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
    public partial class register_manage : System.Web.UI.Page
    {

        
        protected void Page_Load(object sender, EventArgs e)
        {

            SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
            con.Open();

           
            string user = string.Empty;

            if (Session["username"] == null)
            {
                Response.Redirect("login.aspx");
            }
            else if (!string.IsNullOrEmpty(Request.QueryString["test"]))
            {
                user = Request.QueryString["test"];
                current_user.Text = "Hi " + user;
                
            }

            // "Select count(*) from [register] where Username= '" + username.Text + "'  ", com)
            bool exist = false;
            int val=0;
            using (SqlCommand cmd = new SqlCommand("Select count(*) from [friends] where Username= '" + user + "' and Value= '" + val + "'  ", con))
            {
                cmd.Parameters.AddWithValue("@uname", TextBox1.Text);
                exist = (int)cmd.ExecuteScalar() > 0;
            }
            con.Close();

            if (exist)
            {
                con.Open();
                
                MessageBoxShow("You Have a Pending Friend Request !!!");
                con.Close();
            }

            try
            {
                Image2.ImageUrl = "ImageHandler.ashx?username=" + user;
            }
            catch (Exception ex)
            {
                Response.Redirect("Register.aspx");

            }

            List<string> lst = new List<string>();
            lst = GetData();
             int k=4;
            foreach(string s in lst)
            {

                if (k == 4)
                { Image4.ImageUrl = "ImageHandler.ashx?username=" + s; label4.Text = s; }
                   if(k==5) 
                   { Image5.ImageUrl = "ImageHandler.ashx?username=" + s; label5.Text = s; }
                     if(k==6)
                     {  Image6.ImageUrl = "ImageHandler.ashx?username=" + s;  label6.Text = s; }
                    if(k==7) 
                    {  Image7.ImageUrl = "ImageHandler.ashx?username=" + s;  label7.Text = s; }
                    k++;
            }


            
        }
        
        [WebMethod]

        private void MessageBoxShow(string message)
        {
            this.AlertBoxMessage.InnerText = message;
            this.AlertBox.Visible = true;
            accept.Visible = true;

        }
        
        private List<string> GetData()
    {
        string user = Request.QueryString["test"];
        

         List<string> lst = new List<string>();
        //The object that will physically connect to the database
       using(SqlConnection cnx = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString))
      {

          SqlCommand cmd = new SqlCommand("SELECT * FROM Image_Database where Username != '" + user + "'  ",cnx);
       
           cnx.Open();
           SqlDataReader da = cmd.ExecuteReader();
           
             
             while(da.Read())
             {
                lst.Add(Convert.ToString(da["Username"]));
             }
           
       }
        return lst;
    }


    public static List<string> GetAutoCompleteData(string username)
    {
        List<string>result = new List<string>();
 
        using (SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString))
        {
            using (SqlCommand cmd = new SqlCommand("Select Username from [register] where Username = @SearchText", con))
            {
               con.Open();
               cmd.Parameters.AddWithValue("@SearchText", username);
                SqlDataReader dr = cmd.ExecuteReader();
                while (dr.Read())
               {
                   result.Add(dr["Username"].ToString());
               }
                return result;
            }
        }
    }
       


         protected void Search_Click(object sender, EventArgs e)
         {
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
                 string user = string.Empty;
                 user = Request.QueryString["test"];
                 Response.Redirect("MyProfile.aspx?main_user=" + user + "&curr_user=" + TextBox1.Text);
                 
                 
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
             string user = string.Empty;
             user = Request.QueryString["test"];
             Response.Redirect("MyProfile.aspx?main_user=" + user + "&curr_user=" + user);
         }

         protected void accept_click(object sender, EventArgs e)
         {
            
             MessageBoxShow("Friend request Accepted !!!");
             this.AlertBox.Visible = true;
             accept.Visible = false;

              try
            { 
                  SqlConnection conn = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
                conn.Open();
                string user = string.Empty;
                user = Request.QueryString["test"];

                SqlCommand cmd = new SqlCommand("update friends Set Value=@value where  Username= '" + user + "'  ", conn);
                cmd.Parameters.AddWithValue("@value", 1);
              
                cmd.ExecuteNonQuery();
                cmd.Dispose();
                conn.Close(); 
            }
            catch (Exception ex)
            {
                Response.Write("Nothing");
            }
           
         }
    }
}