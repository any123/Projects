/* There are N points on the road ,you can step ahead by 1 or 2 . 
Find the number of ways you can reach at point N. 
For example:  for n=4 we have 5 possible ways [1,1,1,1]  [1,1,2]  [1,2,1]  [2,1,1]  [2 2].
*/
# include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,x; cin>>n;
		
		int reach[n],i,sum;
		reach[0]=0;
		reach[1]=1;
		reach[2]=2;
		for(i=3;i<=n;i++)
		{
			reach[i]=reach[i-1]+reach[i-2];
		}
		cout<<reach[n]<<endl;
	}
}
