# include<bits/stdc++.h>

using namespace std;

void findsum(int arr[],int n,int k)
{
	int curr_sum=0,min_sum=0,i,index=0;
	
	for(i=0;i<k;i++)
	curr_sum+=arr[i];
	
	min_sum=curr_sum;
	
	for(i=k;i<n;i++)
	{
		curr_sum+=arr[i]-arr[i-k];							// _|-|_|-|_|-|
		if(curr_sum<min_sum)							
		{
			min_sum=curr_sum;
			index=(i-k+1);
		}
	}
	
	cout<<"subarray between ["<<index<<","<<index+k-1<<"] has minimum averge";
	
}

int main()
{
	int arr[]={3,7,90,20,10,50,40};
	
	int k=3,n;
	n=sizeof(arr)/sizeof(int);
	findsum(arr,n,k);
	return 0;
}
