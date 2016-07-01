# include<bits/stdc++.h>

using namespace std;

void findzeroes(int arr[],int n,int m)
{
	int lw=0,rw=0,bestl=0,bestwindow=0,i,zerocount=0;
	
	while(rw<n)
	{
		if(zerocount<=m)
		{
		if(arr[rw]==0)
		zerocount++;
		rw++;
		}
		else
		if(zerocount>m)
		{
			if(arr[lw]==0)
			zerocount--;
			lw++;
		}
		
		if(rw-lw > bestwindow)
		{
			bestwindow=rw-lw;
			bestl=lw;
		}
	}
	
	for(i=0;i<bestwindow;i++)
	{
		if(arr[bestl+i]==0)
		cout<<bestl+i<<" ";
	}
	
}

int main()
{	int m=2;   //   we can split 2 i.e(m) zeroes
	int arr[]={1,0,0,1,1,0,1,0,1,1};
	int n=sizeof(arr)/sizeof(int);
	cout<<"indexes to be flipped are ";
	findzeroes(arr,n,m);
}
