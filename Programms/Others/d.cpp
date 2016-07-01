# include<bits/stdc++.h>

using namespace std;
int bs(int A[],int n,int x,int l,int r)
{
	int mid=l+(r-l)/2;
	
	while(l<r)
	{
		if(x==A[mid]) return mid;
		if(x<A[mid])  
		l=mid+1;
		else
		r=mid-1;
	}
}

int fun(int A[],int n,int x)
{
	int a=bs(A,n,x,0,n-1);
	int i,j; cout<<a<<endl;
	int lc=0,rc=0;
	
	for(i=0;i<a;i++)
	{if(x==A[i])
	lc++;
	}
	
	for(j=a+1;j<n;j++)
	{
		if(x==A[j])
		rc++;
	}
	return(lc+rc);	
}
int main()
{
	int A[]={1,2,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,6,6,6,7,8,9};
	int n=sizeof(A)/sizeof(int);
	int c=fun(A,n,4);
	cout<<c<<endl;
	int d=0;  d=fun(A,n,6);
	cout<<d;
	
}
