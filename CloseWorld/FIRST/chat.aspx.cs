using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace FIRST
{
    public partial class chat : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            
            if (Session["username"] != null)
            {
                string msg = (string)Application["msg"];

                TextBox1.Text = msg;
            }
            else
            {
                Response.Write("Login first");
                Response.Redirect("login.aspx");
            }
              
             
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            string name = TextBox2.Text;
            string message = TextBox2.Text;
            string my = name + Environment.NewLine;

            Application["msg"] = my + Environment.NewLine;

            TextBox1.Text = Application["msg"].ToString();

            TextBox1.Text = message;
            TextBox2.Text = "";

            //mockingbird

        }
    }
}