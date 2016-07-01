# include<bits/stdc++.h>
# include<windows.h>
using namespace std;
void gotoxy(short col,short row)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(h,position);
	
}
int main()
{
	gotoxy(3,4);
	cout<<"HI !!!|\n";
}
