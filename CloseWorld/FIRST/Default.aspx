<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Default.aspx.cs" Inherits="FIRST.Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    
    <form id="form1" runat="server">
    <div>
    
    
     <script language="jscript" type="text/javascript">
         function popup() {
             var a = window.open("chat.aspx", 'width=250,height=500,left=350,top=120')
         }
     </script>
     
    </div>
    </form>

</head>
<body onload="popup(); return false;" >
    
</body>
</html>
