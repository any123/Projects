# include<bits/stdc++.h>
using namespace std;

int main()
{
	string q,r,s;
	getline(cin,s);
	
	r=s;
	reverse(s.begin(),s.end());
	cout<<r<<endl<<s;
	cout<<endl<<r.compare(s);
	r=r.substr(2,4);
	cout<<endl<<r;
	
}
