# include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,r;
	int hash_arr[256],i,j;
	cin>>s>>r;
	memset(hash_arr,0,sizeof(hash_arr));
	int m,n;
	m=s.size(); n=r.size();
	for(i=0;i<m;i++)
	hash_arr[(int)s[i]]+=1;
	
	for(i=0;i<n;i++)
	hash_arr[(int)r[i]]+=1;
	
	for(i=65;i<=90;i++)
		if(hash_arr[i]>1)
		cout<<(char)i;
}
