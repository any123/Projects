#include <bits/stdc++.h>
using namespace std;

void play(vector<int>&arr,int sum)
{
     int i,j,k,n=arr.size();
     int a=0,b=1;
	    for(k=0;k<n;k++)
	    {
	        for(i=k+1,j=n-1;i<j;)
	        {
	            if((arr[i]+arr[j]+arr[k]) == sum)
	            {cout<<b<<endl; return;}
	            else
	             if ((arr[i]+arr[j]+arr[k]) < sum)
	            i++;
	            else
	            j++;
	        }
	    }
	    
	    cout<<a<<endl; return;
	    return;
}


int main() {
	
	int t; cin>>t;
	while(t--)
	{
	    int n,sum ; cin>>n>>sum;
	    vector<int>arr(n);
	    
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    sort(arr.begin(),arr.end());
	    
	   play(arr,sum);
	
	}
	return 0;
}
