<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Register.aspx.cs" Inherits="FIRST.Register" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">


<html xmlns="http://www.w3.org/1999/xhtml">

<head runat="server">
    <title></title>
   <!--  <link rel="Stylesheet" type="text/css" href="/bg.css" /> -->

    <style type="text/css">
        .style1
        {
            width: 100%;
        }
        .style2
        {
            width: 432px;
            text-align: right;
        }
        .style
        {
            text-align: right;
        }
        .mystyle
        {
            background-image:url('E:\Database\FIRST\FIRST\using.jpg');
  background-repeat:no-repeat;
  -webkit-background-size:cover;
  -moz-background-size: cover;
  -o-background-size:cover;
  
  background-position: center; 
        }
    </style>  
  <!--  <link rel="Stylesheet" type="text/css" href="E:\Database\FIRST\FIRST\bg.css" /> -->
</head>
<body>
   
    <form id="form1" runat="server">
    <div  class="mystyle">
    
        <table class="style1">
         <tr>
                <td class="style2">
                    &nbsp;</td>
                <td>
                    <br />
                    <asp:Label ID="Label1" runat="server" Text="REGISTERATION PAGE" 
                        style="font-weight: 700; font-size: large; text-align: right"></asp:Label>
                    <br />
                    <br />
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    UserName</td>
                <td>
                    <asp:TextBox ID="username" runat="server" Width="245px" height="30px"></asp:TextBox>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ErrorMessage="Username" ForeColor="#FF3300" ControlToValidate="username"></asp:RequiredFieldValidator>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    Email</td>
                <td>
                    <asp:TextBox ID="email" runat="server" Width="245px" height="30px"></asp:TextBox>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ErrorMessage="Email Required" ForeColor="#FF3300" 
                        ControlToValidate="email"></asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
                        ControlToValidate="email" ErrorMessage="Enter a valid email ID" 
                        ForeColor="#FF3300" 
                        ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    Password</td>
                <td>
                    <asp:TextBox ID="pass" runat="server" Width="245px" height="30px" TextMode="Password"></asp:TextBox>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                        ErrorMessage="Enter Password" ForeColor="#FF3300" 
                        ControlToValidate="pass"></asp:RequiredFieldValidator>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    Confirm Password</td>
                <td>
                    <asp:TextBox ID="confirm" runat="server" Width="245px" height="30px" TextMode="Password" ></asp:TextBox>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" 
                        ErrorMessage="This field required" ForeColor="#FF3300" 
                        ControlToValidate="confirm"></asp:RequiredFieldValidator>
                &nbsp;<asp:CompareValidator ID="CompareValidator1" runat="server" 
                        ControlToCompare="pass" ControlToValidate="confirm" 
                        ErrorMessage="Passwords do not match" ForeColor="#FF3300"></asp:CompareValidator>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    City</td>
                <td>
                    <asp:DropDownList ID="city" runat="server" Width="245px" height="30px">
                        <asp:ListItem>Select City</asp:ListItem>
                        <asp:ListItem>Jalandhar</asp:ListItem>
                        <asp:ListItem>Amritsar</asp:ListItem>
                        <asp:ListItem>Delhi</asp:ListItem>
                        <asp:ListItem>Banglore</asp:ListItem>
                        <asp:ListItem>Ahmedabad</asp:ListItem>
                        <asp:ListItem>Banglore</asp:ListItem>
                        <asp:ListItem>Agra</asp:ListItem>
                    </asp:DropDownList>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" 
                        ErrorMessage="Select a city" ForeColor="#FF3300" 
                        ControlToValidate="city" InitialValue="Select City"></asp:RequiredFieldValidator>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    &nbsp;</td>
                <td>
                    <br />
                    <asp:Button ID="Button2" runat="server" onclick="Button2_Click" Text="Submit"  Width="96px" />
                    <br />
                    <br />
                    <asp:Label ID="result" runat="server" Visible="False"></asp:Label>
                    <br />
                </td>
                <td>
                    &nbsp;</td>
            </tr>
                 </table>
    
    </div>
    </form>
    <p>
        &nbsp;</p>

          <script type="text/javascript">

              // Description: Randomly change background color every 5 seconds

              function setbackground() {
                  window.setTimeout("setbackground()", 4000); // 5000 milliseconds delay

                  var index = Math.round(Math.random() * 8);

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
</body onload="setbackground();">
</html>
