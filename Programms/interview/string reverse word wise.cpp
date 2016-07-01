# include<bits/stdc++.h>
using namespace std;
void play(string s,int l)
{
	string s2=s,sub_string;
	reverse(s2.begin( ),s2.end( ));
	cout<<s<<endl<<s2<<endl;
	int i=0,start;
	int j=0; start=0;
	while(j<l)
	{   
	if(s2[j]==' ')
	j++;
	else
	{
			while(s2[j]!=' ')
	   		j++;
	   sub_string=s2.substr(start,j);
	   reverse(sub_string.begin(),sub_string.end());
	   cout<<sub_string<<" ";
	   start=j+1;
	   
	}
	}
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
		int l;
		fflush(stdin);
		getline(cin,s);
		fflush(stdin);
		l=s.size();
		play(s,l);
	}
}
