# include<bits/stdc++.h>

using namespace std;

int search(int arr[],int low,int high,int x)
{
	int mid=low+(high-low)/2;
	
	if(x==arr[mid]) return mid;
	
	
	if(arr[mid]<=high)
	{
		if(x>arr[mid] && x<arr[high])
		search(arr,mid+1,high,x);
		else
		search(arr,low,mid-1,x);
	}
	else
	{
		if(x>arr[low]&&x<arr[mid])
		search(arr,low,mid-1,x);
		else
		search(arr,mid+1,high,x);
	}
	
}

int main()
{
	int t; cin>>t; 
	
	while(t--)
	{
		int n; cin>>n; int arr[n];
		
		for(int i=0;i<n;i++) cin>>arr[i];
		
		int low=0,high=n-1;
		int x; cin>>x;
		cout<<search(arr,low,high,x)<<endl;
	}
	
	
	
}
