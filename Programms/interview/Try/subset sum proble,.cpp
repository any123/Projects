# include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>>t;
	
	while(t--)
	{
		int n; cin>>n; 
		int i,arr[n]; static int left,right;
		int j,k=0;
		for(i=0;i<n;i++) cin>>arr[i];
		
		sort(arr,arr+n);
		i=1; j=n-1;
		left=arr[0];  right=arr[n-1];
		while(i<j)
		{
			if(left<right)
			{
			left+=arr[i]; i++;
			//cout<<"yes "<<" ";
			}
			else
			{
				right+=arr[j]; j--;
			//	cout<<"no"<<" ";
			}
		}
		if(left==right)
			cout<<"possible !!!\n";
			
			else 
			 cout<<"Not possible !!!\n";
		
	}
}
