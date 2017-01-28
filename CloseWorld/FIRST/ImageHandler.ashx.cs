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
    /// <summary>
    /// Summary description for ImageHandler
    /// </summary>
    public class ImageHandler : IHttpHandler
    {

        public void ProcessRequest(HttpContext context)
        {
            try
            {
                string username = context.Request.QueryString["username"].ToString();
                string sConn = System.Configuration.ConfigurationManager.ConnectionStrings["ConnectionStringRegister"].ToString();
                SqlConnection objConn = new SqlConnection(sConn);
                objConn.Open();
                string sTSQL = "select image from Image_Database where Username=@username";
                SqlCommand objCmd = new SqlCommand(sTSQL, objConn);

                objCmd.CommandType = System.Data.CommandType.Text;

                objCmd.Parameters.AddWithValue("@username", username.ToString());
                object data = objCmd.ExecuteScalar();
                objConn.Close();
                objCmd.Dispose();
                context.Response.BinaryWrite((byte[])data);
            }
            catch {
               // context.Response.Write("No image found");
            }
        }

        public bool IsReusable
        {
            get
            {
                return false;
            }
        }
    }
}