#include<bits/stdc++.h>          //note that this also an ans to the question implement strtok function using space as deliminitor

using namespace std;
vector<string> play(string s)
{
	int i,n=s.size();
	string temp;
	vector<string>v;
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			v.push_back(temp);
			temp.clear();
		}
		else
		{
			temp=temp+s[i];
		}
		
	}
	v.push_back(temp);  // to push the last word
	
	return v;
}


int main()
{
    string inp;
    getline(cin,inp);
    vector<string>v;
    
    v=play(inp);
    reverse(v.begin(),v.end());
    vector<string>::iterator it;
    
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    
    
return 0;
    
}
