# include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		int arr[n+m];
		for(i=0;i<m+n;i++)
		cin>>arr[i];
		
		vector<int>v(arr,arr+n);
		
		for(i=n;i<n+m;i++)
		if(binary_search(v.begin(),v.end(),arr[i]))
		cout<<"YES\n";
		else
		cout<<"NO "<<arr[i]<<endl;		
	}
}
