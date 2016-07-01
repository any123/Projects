
# include<bits/stdc++.h>

int PQ[10][4],f[10],r[10];
# define b 4
using namespace std;
void insert(int PQ[10][b],int x,int k)
{
	if(r[k]==b-1)
	cout<<"full\n";
	else
	
	r[k]++;
	PQ[k][r[k]]=x;
	
	if(f[k]==-1)
	f[k]=0;
		
}
	  int delet(int PQ[10][b],int k)
	  {
		   
		 if(f[k]==r[k])
			{
				k++;
				f[k]++;
			}
			else
			f[k]++;  
	  }                  
	  void display(int PQ[10][b],int k)
	  {
	  	for(int i=f[k];i<k;i++)
	  	{
	  		for(int j=r[k];j<k;j++)
	  		{
	  			if(PQ[i][j]==0)
	  			cout<<"";
	  			else
	  			cout<<PQ[i][j]<<" ";
	  		}
	  	}cout<<endl;
	  }
int main()
{ 	int m,k;
	cin>>m;					// m=no. of prioritis b=no. of elements
	int i,j;
	for(i=0;i<=m-1;i++)
	{
		f[i]=r[i]=-1;
	}
	int item,ch; char a;
	do
	{
	
	cout<<"1 insert 2 delete:"<<endl;
	cin>>ch;
	switch(ch)
		{
		case 1 : 
		cout<<"enter element and its priority"<<endl;
		cin>>item>>k;
		insert(&PQ[0],item,k); 
		display(&PQ[0],m);
		break;
		case 2:	delet(&PQ[0],0);
		display(&PQ[0],m);
		break;
		}
		cout<<"do u wish to continue y/n"<<endl;
		cin>>a;
		if(a!='y') exit(1);
	}while(a=='y');
}
