using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.IO;
using System.Data;
public partial class songs : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {


        DataTable dt = new DataTable();

        dt.Columns.Add("Filename", typeof(string));
        dt.Columns.Add("Size", typeof(string));



        foreach (string strFile in Directory.GetFiles(Server.MapPath(@"~/songs/")))
        {
            FileInfo fi = new FileInfo(strFile);

            dt.Rows.Add(fi.Name, fi.Length);


        }


        GridView1.DataSource = dt;
        GridView1.DataBind();

    }



    protected void GridView1_RowCommand(object sender, GridViewCommandEventArgs e)
    {
        if (e.CommandName == "Download")
        {
            Response.Clear();
            Response.ContentType = "application/octet-stream";
            Response.AppendHeader("content-disposition", "filename=" + e.CommandArgument);
            Response.TransmitFile(Server.MapPath("~/songs/") + e.CommandArgument);
            Response.End();
        }
    }

}