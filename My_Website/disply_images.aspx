<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="disply_images.aspx.cs" Inherits="disply_images" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">

    <br />
    <br />
    <br />

<asp:GridView ID="Gv_imgs" CssClass="grid" runat="server" AutoGenerateColumns="False" ShowHeader="False" Width="384px"     OnRowCommand="GridView1_RowCommand" >  
      
      <Columns>  
           <asp:BoundField DataField="Text" HeaderText="Name" />  
            <asp:ImageField DataImageUrlField="Value" ControlStyle-Height="350" ControlStyle-Width="290" HeaderText="Images" /> 
           <asp:TemplateField HeaderText="Download" >
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton1" runat="server"
                            CommandArgument='<%# Eval("Value") %>' CommandName="Download"
                            Text= "download"> 
                        </asp:LinkButton>
                    </ItemTemplate>
            </asp:TemplateField> 
      </Columns>  
    <FooterStyle BackColor="White" ForeColor="#000066" />
        <HeaderStyle BackColor="#006699" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="White" ForeColor="#000066" HorizontalAlign="Left" />
        <RowStyle ForeColor="#000066" />
        <SelectedRowStyle BackColor="#669999" Font-Bold="True" ForeColor="White" />
        <SortedAscendingCellStyle BackColor="#F1F1F1" />
        <SortedAscendingHeaderStyle BackColor="#007DBB" />
        <SortedDescendingCellStyle BackColor="#CAC9C9" />
        <SortedDescendingHeaderStyle BackColor="#00547E" />

 </asp:GridView> 
</asp:Content>

