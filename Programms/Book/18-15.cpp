# include<bits/stdc++.h>
using namespace std;
int find_med_logn(int ar1[],int ar2[],int a,int b,int start1,int end1,int start2,int end2)
{
	int m1,m2;int x=a/2,y=b/2-1;
	m1=ar1[x]; m2=ar2[y];
	int index1,index2;  index1=a/2; index2=b/2;
	if(m1==m2) return m1;
	else
	{
		while(a>2 || b>2)
		{
			if(m1>m2)
	{
		find_med_logn(ar1,ar2,a/2,b/2,0,index1,index2,b-1);
	}
	else
	{
		find_med_logn(ar1,ar2,a/2,b/2,index1,a-1,0,index2);
	}
		}
		if(a==2)
		return(max(ar1[0],ar2[0])+min(ar1[1],ar2[1]))/2;
	}
}
int main()
{
	int ar1[]={1,3,5,7,9};
	int ar2[]={2,4,6,8,10,12};
	int size=5; int size2=6;
	cout<<find_med_logn(ar1,ar2,size,size2,0,4,0,5);
}
