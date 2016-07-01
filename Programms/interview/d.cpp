# include<bits/stdc++.h>
using namespace std;

int main()
{
	map <int,int>mp;
	int a[]={3,4,1,2};
	int i,j,b[]={0,1,0,1};
	
	
	for(i=0;i<4;i++)
	{
		mp[a[i]]=b[i];
	}
	
	map<int,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	cout<<it->first<<" ";
	
	cout<<endl;
	for(it=mp.begin();it!=mp.end();it++)
	cout<<it->second<<" ";
}
