<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="softwares.aspx.cs" Inherits="softwares" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>

<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    Latest update is comming soon.<br />
    Stay tuned for latest download.<br />
    <br />
    
    <br />
    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" BackColor="White" BorderColor="#CCCCCC" BorderStyle="None" BorderWidth="1px" CellPadding="3" Height="170px" OnRowCommand="GridView1_RowCommand" Width="771px" >
        <Columns>
            <asp:BoundField DataField="Filename" HeaderText="File" />
            <asp:BoundField DataField="Size" HeaderText="Size" />
             <asp:TemplateField HeaderText="Download" >
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton1" runat="server"
                            CommandArgument='<%# Eval("Filename") %>' CommandName="Download"
                            Text='<%# Eval("Filename") %>'> </asp:LinkButton>
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

