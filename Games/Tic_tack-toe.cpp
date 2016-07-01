# include<bits/stdc++.h>

using namespace std;

int disp(char a[3][3])
{	cout<<endl;
	cout<<"      "<<a[0][0]<<"|"<<" "<<a[0][1]<<"| "<<a[0][2]<<endl;
	cout<<"     ---------"<<endl;
	cout<<"      "<<a[1][0]<<"|"<<" "<<a[1][1]<<"| "<<a[1][2]<<endl;
	cout<<"     ---------"<<endl;
	cout<<"      "<<a[2][0]<<"|"<<" "<<a[2][1]<<"| "<<a[2][2]<<endl;
	cout<<endl;
}
void search(char a[3][3],char p,int x)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(p==a[i][j])
			{
				if(x==0) 
				a[i][j]='X';
				else
				a[i][j]='O';
			}
		}
	}
}

int res(char a[3][3])
{
	for(int i=0;i<3;i++)
	  {
	  	for(int j=0;j<3;j++)
	  	{
	  		if(a[i][j]!='O' || a[i][j]!='X')
	  		return 0;
	  	}
	  }
}
void seewhowins(char a[3][3])
{
	int i=0,j=0;
		if((a[i][j]=='X')&& (a[i][j+1]=='X')&& (a[i][j+2]=='X') 
	|| (a[i][j]=='X')&& (a[i+1][j]=='X')&& (a[i+2][j]=='X')
	|| (a[i][j+1]=='X')&& (a[i+1][j+1]=='X')&& (a[i+2][j+1]=='X')
	|| (a[i][j+2]=='X')&& (a[i+1][j+2]=='X')&& (a[i+2][j+2]=='X')
	|| (a[i][j]=='X')&& (a[i+1][j+1]=='X')&& (a[i+2][j+2]=='X')
	|| (a[i+1][j]=='X')&& (a[i+1][j+1]=='X')&& (a[i+1][j+2]=='X')
	|| (a[i+2][j]=='X')&& (a[i+2][j+1]=='X')&& (a[i+2][j+2]=='X')   )
	{
		cout<<"\n Player one wins !!!\n";
		exit(1);
	}
		if((a[i][j]=='O')&& (a[i][j+1]=='O')&& (a[i][j+2]=='O') 
	|| (a[i][j]=='O')&& (a[i+1][j]=='O')&& (a[i+2][j]=='O')
	|| (a[i][j+1]=='O')&& (a[i+1][j+1]=='O')&& (a[i+2][j+1]=='O')
	|| (a[i][j+2]=='O')&& (a[i+1][j+2]=='O')&& (a[i+2][j+2]=='O')
	|| (a[i][j]=='O')&& (a[i+1][j+1]=='O')&& (a[i+2][j+2]=='O')
	|| (a[i+1][j]=='O')&& (a[i+1][j+1]=='O')&& (a[i+1][j+2]=='O')
	|| (a[i+2][j]=='O')&& (a[i+2][j+1]=='O')&& (a[i+2][j+2]=='O')   )
	{
		cout<<"\n Player two wins !!!\n";
		exit(1);
	}
}
int main()
{
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	disp(a);
	char p1,p2;
	int count=0;
	cout<<"Come on let's play Tic-Toe !!!\n";
	cout<<"Enter the number appearing on the screen \n";
	cout<<"OK Let's START !!!\n";
	while(count<7)
	{
		cout<<"\nPlayer 1 chance !!!\n"; cin>>p1;
		search(a,p1,0);   disp(a); seewhowins(a);
		
		cout<<"Player 2 chance !!!\n"; cin>>p2;
		search(a,p2,1);  disp(a); seewhowins(a);
		
			count++;
	}
		if(res(a))
		{
			cout<<"Match drwan\n";
			exit(1);
		}
		
}
