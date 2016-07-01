# include<bits/stdc++.h>

using namespace std;

void sum(list<int>l,int ps,int n)
{	
	int static count=0;
	count++;
	if(count==n+1)  {
	cout<<ps;  return;}
	
	list<int>::iterator it;
	int cs=0,i=1;
	for(it=l.begin();it!=l.end();it++)
	{
		cs=cs+(*it)*i; i++;
	}  cout<<cs<<" ";
	if(cs>ps)  ps=cs;
	it=l.begin();
	l.pop_front();
	l.push_back(*it);
	
	sum(l,ps,n);
	

}

int main()
{
	int n,i,x;  cin>>n;
	
	list<int>::iterator *it;
	list<int>l;
	for(i=0;i<n;i++)
	{
		cin>>x;
		l.push_back(x);
	}
	
	
	sum(l,0,n);
}
