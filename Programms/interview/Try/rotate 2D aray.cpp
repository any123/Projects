# include<iostream>

using namespace std;

int main()
{
	int t; cin>>t; 
	while(t--)
	{
		int n; cin>>n;
		int s_arr[n][n],d_arr[n][n];
		int r,c;
		
		for(r=0;r<n;r++)
		{
			for(c=0;c<n;c++)
			{
				cin>>s_arr[r][c];		
			}
		}
		
		for(r=0;r<n;r++)
		{
			for(c=0;c<n;c++)
			{
				d_arr[c][n-r-1]=s_arr[r][c];		
			}
		}
		
		for(r=0;r<n;r++)
		{
			for(c=0;c<n;c++)
			{
				cout<<d_arr[r][c]<<" ";		
			}
			cout<<endl;
		}
		
	}
}
