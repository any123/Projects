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
    public partial class Register : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
          

        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            SqlConnection con = new SqlConnection(ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ConnectionString);
            con.Open();
           
            bool exist = false;
            using (SqlCommand cmd = new SqlCommand("Select count(*) from [register] where Username= @uname", con))
            {
                cmd.Parameters.AddWithValue("@uname", username.Text);
                exist = (int)cmd.ExecuteScalar() > 0;
            }


            if (exist)
            {
                result.Visible = true;
                result.Text = "User already exist";

            }
            else
            {
                using (SqlCommand cmd = new SqlCommand("insert into register (Username, Email, Pass, City) values (@uname, @email, @pass, @city) ", con))
                {
                    cmd.Parameters.AddWithValue("@uname", username.Text);
                    cmd.Parameters.AddWithValue("@email", email.Text);
                    cmd.Parameters.AddWithValue("@pass", pass.Text);
                    cmd.Parameters.AddWithValue("@city", city.Text);

                    cmd.ExecuteNonQuery();


                }

                using (SqlCommand cm = new SqlCommand("insert into Image_database (Username) values (@uname) ", con))
                {
                    cm.Parameters.AddWithValue("@uname", username.Text);


                    cm.ExecuteNonQuery();


                }
                Response.Redirect("register_manage.aspx?test=" + username.Text);

            }
            con.Close();
        }
    }
}
