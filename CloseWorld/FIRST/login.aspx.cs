using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Configuration;


namespace FIRST 
{
    public partial class login : System.Web.UI.Page 
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
            
        }

        protected void Button2_Click(object sender, EventArgs e)
        {


            SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
            con.Open();
            


            // "Select count(*) from [register] where Username= '" + username.Text + "'  ", com)
            bool exist = false;
            using (SqlCommand cmd = new SqlCommand("Select count(*) from [register] where Username= @uname", con))
            {
                cmd.Parameters.AddWithValue("@uname", username.Text);
                exist = (int)cmd.ExecuteScalar() > 0;
            }
            con.Close();

            if (exist)
            {
                con.Open();

                string check = "select Pass from register where Username= '" + username.Text + "'  ";
                SqlCommand cmd = new SqlCommand(check, con);
                string pasword = cmd.ExecuteScalar().ToString();
                if (pasword == password.Text)
                {
                    
                    Session["username"] = username.Text;
                    /*
                    string SID = "nirmal"; string a = null;
                    using (SqlCommand cm = new SqlCommand("Delete From friends where Username='" + SID + "' and  Friends ='"+ a + " ' ", con))
                    {
                      
                        cm.ExecuteNonQuery();
                        cm.Dispose();
                      
                      }
                    
                    */
                    Response.Redirect("register_manage.aspx?test=" + username.Text);

                }
                else
                {
                    username.Text = "";
                    Response.Redirect("login.aspx");
                }
             }
            else
            {
                username.Text = "";
                Response.Redirect("login.aspx");
            }
            con.Close();
            
        }

       

        protected void REGISTER_Click(object sender, EventArgs e)
        {
            
                Response.Redirect("Register.aspx");
            
        }
    }
}


