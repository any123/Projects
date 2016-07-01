# include<bits/stdc++.h>
using namespace std;
# define large 999
int main()
{
	int t; scanf("%d",&t);
	while(t--)
	{
		int n; scanf("%d",&n);
		int i,j,arr[n][n],min=large,prev_index=0;
		for(i=0;i<n;i++)
		  for(j=0;j<n;j++)
		    scanf("%d",&arr[i][j]);
		    
		    int sum=0;
		    for(i=0;i<n;i++)
		    {
		    	for(j=0;j<n;j++)
		    	{  xy:
		    		min=large;
		    		if(arr[i][j]<min)
		    		{
		    			min=arr[i][j];
		    			if(prev_index!=j)
		    			prev_index=j;
		    			else
		    			{	
		    				arr[i][j]=large;
		    				goto xy;
		    			}
		    		}
		    	}
		    	sum=sum+min;
		    	
		    }
		    cout<<sum<<endl;
	}
}
