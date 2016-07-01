# include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		list<char>s;
		list<char>::iterator it;
		char ch;
		int n,i; cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>ch;
			s.push_back(ch);
		}
		s.remove('b');
	
		for(it=s.begin();it!=s.end();it++)
			if(*it=='a'&&*(it++)=='c')
			{
				s.remove('a');
				s.remove('c');
			}		
		for(it=s.begin();it!=s.end();it++)
		cout<<*it;
		cout<<endl;
	}
}
