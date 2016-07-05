using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.IO;
using System.Data;

public partial class disply_images : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            string[] ImagePaths = Directory.GetFiles(Server.MapPath("~/waalpapers/"));
            List<ListItem> Imgs = new List<ListItem>();
            foreach (string imgPath in ImagePaths)
            {
                string ImgName = Path.GetFileName(imgPath);
                Imgs.Add(new ListItem(ImgName, "~/waalpapers/" + ImgName));
            }
            Gv_imgs.DataSource = Imgs;
            Gv_imgs.DataBind();
        }  



        /*


        DataTable dt = new DataTable();

        dt.Columns.Add("Filename", typeof(string));
        dt.Columns.Add("Size", typeof(string));
        



        foreach (string strFile in Directory.GetFiles(Server.MapPath(@"~/waalpapers/")))
        {
            FileInfo fi = new FileInfo(strFile);

            dt.Rows.Add(fi.Name, fi.Length);
           


        }


        GridView1.DataSource = dt;
        GridView1.DataBind();
        */
    }

    protected void GridView1_RowCommand(object sender, GridViewCommandEventArgs e)
    {
        if (e.CommandName == "Download")
        {
             
            Response.Clear();
            Response.ContentType = "application/octet-stream";
            Response.AppendHeader("content-disposition", "filename=" + e.CommandArgument);
            Response.TransmitFile( (e.CommandArgument).ToString());
            Response.End();;
        }
    }

}