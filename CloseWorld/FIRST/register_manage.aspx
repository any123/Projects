<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="register_manage.aspx.cs" Inherits="FIRST.register_manage" %>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">


<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">

<style>
body {
    background-color: linen;
    overflow: hidden;
}
    .style6
    {
        height: 113px;
        width: 655px;
    }
</style>
    <title>AutoComplete Box with jQuery</title>
    <link href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.1/themes/base/jquery-ui.css" rel="stylesheet" type="text/css" />
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8.1/jquery-ui.min.js"></script>
    <script type="text/javascript">
        $(document).ready(function () {
            $(".autosuggest").autocomplete({
                source: function (request, response) {
                    $.ajax({
                        type: "POST",
                        contentType: "application/json;charset=utf-8",
                        url: "register_manage.aspx/GetAutoCompleteData",
                        data: "{'username':'" + document.getElementById('TextBox1').value + "'}",
                        dataType: "json",
                        success: function (data) {
                            response(data.d);
                        }
                    });
                }
            });
        });
 
    </script>

    
     <style type="text/css">
           html, body { height: 100%; }
body {
    
  
    background-image : url("Images/apply.jpg");
    overflow: hidden;
}
   
           .alertBox
            {
                position: absolute;
                top: 100px;
                left: 50%;
                width: 500px;
                margin-left: -250px;
                background-color: #fff;
                border: 1px solid #ccc;
                border-radius: 4px;
                box-sizing: border-box;
                padding: 4px 8px;
            }


        </style>
        <script type="text/javascript">
            function closeAlert(e) {
                e.preventDefault();
                this.parentNode.style.display = "none";
            }
        </script>
    
      <script type="text/javascript">

          // Description: Randomly change background color every 5 seconds

          function setbackground() {
              window.setTimeout("setbackground()", 4000); // 5000 milliseconds delay

              var index = Math.round(Math.random() * 16);

              var ColorValue = "FFFFFF"; // default color - white (index = 0)

              if (index == 1)
                  ColorValue = "url('Wallpapers/1.jpg')"; //peach
              if (index == 2)
                  ColorValue = "url('Wallpapers/2.jpg')"; //violet
              if (index == 3)
                  ColorValue = "url('Wallpapers/3.jpg')";
              if (index == 4)
                  ColorValue = "url('Wallpapers/4.jpg')";
              if (index == 5)
                  ColorValue = "url('Wallpapers/5.jpg')";
              if (index == 6)
                  ColorValue = "url('Wallpapers/6.jpg')";
              if (index == 7)
                  ColorValue = "url('Wallpapers/7.jpg')";
              if (index == 8)
                  ColorValue = "url('Wallpapers/8.jpg')";


              document.getElementsByTagName("body")[0].style.backgroundImage = ColorValue;

          }
    </script>

</head>

<body  onload="setbackground();">
<form id="form1" runat="server">
&nbsp;<asp:Panel ID="Panel1" runat="server" BackColor="#3B5998" ForeColor="#598952">
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    <asp:Image ID="Image1" runat="server" Height="25px" 
        ImageUrl="~/Images/apply.png" Width="34px" />
    &nbsp;&nbsp;
    <asp:TextBox ID="TextBox1" runat="server" 
         CssClass="autosuggest" Width="170px" Height="30px"></asp:TextBox>
    &nbsp;<asp:Button ID="Search" runat="server" Text="Search" Width="53px" 
        onclick="Search_Click" />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<asp:Image ID="Image3" 
        runat="server" ImageUrl="~/Images/online_button.gif" />
    &nbsp;&nbsp;<asp:LinkButton 
        ID="current_user" runat="server" BackColor="#3B5998" ForeColor="White" 
        onclick="current_user_Click">LinkButton</asp:LinkButton>
         &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp;
           <asp:Button ID="Button1" runat="server" onclick="logout_Click" Text="LogOut" Width="58px" />
   
</asp:Panel>
<br />
<div runat="server" id="AlertBox" class="alertBox" Visible="false">
                <div runat="server" id="AlertBoxMessage"></div>
                <button onclick="closeAlert.call(this, event)">Ok</button>
                <asp:Button ID="accept"  Visible="true" runat="server" OnClick="accept_click" Width="53px"  Text="Accpet" />  
            </div>
            
           

<table>
    <tr>
    <td width="4%"></td>
        <td  width="15%"><asp:Image ID="Image2" runat="server" Height="200px" style="margin-top: 0px" 
            Width="171px" /> </td>
                <td width="2%"></td>
            <td class="style6">
                <asp:Panel ID="Panel2" runat="server" Height="200px" Width="629px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; also</asp:Panel>
            </td>
            <td>
             <asp:Panel ID="Panel3" runat="server" Height="200px" Width="129px"><b>People you may &nbsp; &nbsp;Know  </b>
                    <table>
                        <tr>
                              <asp:Image ID="Image4" runat="server"  Height="100px" width="100px" /><asp:Image />
                              <asp:Label ID="label4"  runat="server"></asp:Label>
                        </tr>
                        <tr>
                               <asp:Image ID="Image5" runat="server"  Height="100px" width="100px" /><asp:Image/>
                               <asp:Label ID="label5"  runat="server"></asp:Label>
                         </tr>
                         <tr>
                                 <asp:Image ID="Image6" runat="server"  Height="100px" width="100px" /><asp:Image/>
                                 <asp:Label ID="label6"  runat="server"></asp:Label>
                         </tr>
                         <tr>
                             <asp:Image ID="Image7" runat="server"  Height="100px" width="100px" /><asp:Image/>
                                <asp:Label ID="label7"  runat="server"></asp:Label>
                         </tr>
                    </table>
             
              </asp:Panel>
            </td>
            
    </tr>

</table>

</form>
    
</body>
</html>


