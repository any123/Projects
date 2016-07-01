# include<bits/stdc++.h>

using namespace std;

int fun(int A[9][9],int r,int c)
{
	int i,j,s,max=0,count=0;
	for(i=0;i<r;i++)
	{	count=0;
		for(j=c-1;j>0;j--)
		{
			if(A[i][j]==0)
		{	j--;
			count++;
		}
		else
		{i++; 
		}
		}
		if(count>max) {max=count;
		s=i;
		}
	}
	return s;
}

int main()
{
	int A[][9]={{1,1,1,1,1,0,0,0,0},
			 {1,1,1,1,1,1,1,0,0},
			 {1,1,1,1,1,0,0,0,0},
			 {1,1,1,1,0,0,0,0,0},
			 {1,1,0,0,0,0,0,0,0},
			 {1,1,1,1,1,1,1,1,1},
			 {1,1,1,1,0,0,0,0,0},
			 {1,1,1,1,1,1,1,0,0},
			 {1,1,1,1,1,0,0,0,0},};
			 
			 	
	int a;	int r=9,c=9;		
	int n=sizeof(A)/sizeof(A[0]);
	a=fun(A,r,c);
	cout<<"Row "<<a;
	
}
