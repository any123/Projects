# include<bits/stdc++.h>
using namespace std;
void LIS(int arr[],int n)
{
	int table[n+1],i,j,max=0;
for (i = 0; i < n; i++ )
        table[i] = 1;
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&& table[i]<table[j]+1)
			table[i]=table[j]+1;
		}
	}
	for(i=0;i<n;i++)
	if(table[i]>max)
	max=table[i];
	
	cout<<max;
	//for(i=0;i<n+1;i++)
	//cout<<table[i]<<" ";
}
int main()
{
	int n; scanf("%d",&n);
	int arr[n],i;
	for(int i=0;i<n;i++) cin>>arr[i];
	
	LIS(arr,n);
}
