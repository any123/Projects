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
	Sleep(10000);           /* Here the prameter is in milliseconds so enter 10000 ms i.e 10 sec 
								this will hold the screen for 10 seconds before proceeding further */
	cout<<"See What happend\n";
}
