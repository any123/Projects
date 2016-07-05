using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Net.Mail;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void SUBMIT_REQUEST(object sender, EventArgs e)
    {
        if (!Page.IsPostBack)
        {
            MailMessage mailmessage = new MailMessage();
            mailmessage.From = new MailAddress(email.ToString());
            mailmessage.To.Add("any65889@gmail.com");

            mailmessage.Body = "<b> Sender name:</b>" + name.Text;
            mailmessage.IsBodyHtml = true;

            SmtpClient smtpclient = new SmtpClient("smtp.gmail.com", 587);
            smtpclient.EnableSsl = true;

            smtpclient.Credentials = new System.Net.NetworkCredential("any65889@gmail.com", "IusemailGdaily@1801");
            smtpclient.Send(mailmessage);


            email.ForeColor = System.Drawing.Color.Gray;
            message.ForeColor = System.Drawing.Color.Gray;
            name.ForeColor = System.Drawing.Color.Red;

            email.Text = "";
            email.Enabled = false;
            name.Enabled = false;
            message.Enabled = false;


        }

    }
}