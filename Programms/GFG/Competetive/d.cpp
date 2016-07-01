# include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n],i,c[60]={0};
	
	for(i=0;i<n;i++) 
	{
		cin>>a[i];
		c[a[i]]+=1;
	}
	
	priority_queue<int>pq;
	int x,count=0;;
	for(i=0;i<=60;i++)
	if(c[i]!=0)
	pq.push(c[i]);
	
	pq.pop();
	while(!pq.empty())
	{  count=0;
		x=pq.top();
	//	cout<<x<<endl;
		pq.pop();
		for(i=0;i<=60;i++)
		if(x==c[i])
		count=i;
		while(count--)
		cout<<i<<" ";
	}
	
}
