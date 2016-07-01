# include<bits/stdc++.h>

using namespace std;

int main()
{
	queue<int> q;
	for(int i=10;i<=90;i+=10)
	q.push(i);
	
	int k; cin>>k;
	stack<int> s;
	int it1;
	for(int i=0;i<k;i++)
	{
		it1=q.front();
		q.pop();
		s.push(it1);
	}
	
	while(!s.empty())
	{
		int m=s.top();
		s.pop();
		q.push(m);
	}
	
	for(int i=0;i<q.size()-k;i++)
	{
		it1=q.front();
		 q.pop();
		q.push(it1);
	}
	cout<<endl;
	while(!q.empty())
	{
	cout<<q.front()<<" ";
	q.pop();
	}
	
	
}



