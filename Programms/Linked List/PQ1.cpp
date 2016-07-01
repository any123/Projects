# include<iostream>
using namespace std;

int main()
{
	int j,ele_arr[100],p_arr[100],p,ele;
	static int f,k=-1,r,size;
	f=r=-1;
	cout<<"Size?\n";
	cin>>size;
	while(size--)
	{
		cout<<"1 to push 2 to delete\n";
		cin>>j;
	switch(j)
	{	
			case 1: cin>>ele>>p;
		p_arr[++k]=p;  f++; r++;
		for(int i=0;i<k-1;i++)
		{
			if(p<=p_arr[i])
		{
			for(j=i;j<r;j++)
			{
				ele_arr[j+1]=ele_arr[j];
				ele_arr[j]=ele;
			}
		}
		else
			break;}
			ele_arr[r]=ele;	
	}
	}
	
	for(j=0;j<=r;j++)
	cout<<ele_arr[j]<<" ";
}
