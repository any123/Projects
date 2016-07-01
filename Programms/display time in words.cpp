# include<bits/stdc++.h>
using namespace std;
struct time
{
	string s[30]={{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},
	{"eleven"},{"twelve"},{"thirteen"},{"foutreen"},{"fifteen"},{"sixteen"},{"seventeen"},{"eighteen"},
	{"nineteen"},{"twenty"},{"twenty one"},{"twenty two"},{"twenty three"},{"twenty four"},
	{"twenty five"},{"twenty six"} ,{"twenty seven"},{"twenty eight"},{"twenty nine"},{"o' clock"}};
}t;

int main()
{
	int q; cin>>q;
	while(q--)
	{
			int h,m;
	cin>>h>>m;
	if(m==0)
	cout<<t.s[h-1]<<" "<<t.s[29];
	else
	if(m<30)
	{
		if(m==1)
		cout<<t.s[m-1]<<" minute past "<<t.s[h-1];
		else
		cout<<t.s[m-1]<<" minutes past "<<t.s[h-1];
	}
	else
	if(m>30 && m!=45)
	{ int var;
		var=60-m;
		if(var>1)
		cout<<t.s[var-1]<<" minutes to "<<t.s[h];
		else
		cout<<t.s[var-1]<<" minute to "<<t.s[h];
	}
	else
	if(m==30)
	cout<<"half past "<<t.s[h-1];
	
	else
	if(m==45)
	{
		cout<<"quarter to "<<t.s[h];
	}
		}
}
