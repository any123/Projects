
#include <bits/stdc++.h>
using namespace std;


int main() {

    int t; cin>>t;
    
    while(t--)
    {
		int n; cin>>n;
		string s;
		while(n>0)
		{
			int rem=n%26;
			
		    if(n%26==0)
		    {
		       s=s+'Z';
		       n=n/26 -1;
		    }
		    else
		    {
		        int a = 64+ rem;
		        s=s+ (char)a;
		        n=n/26;
		    }
		}
		reverse(s.begin(),s.end());
		cout<<s<<endl;
		s.clear();
    }
	return 0;
}
