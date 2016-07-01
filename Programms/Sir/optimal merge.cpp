# include<bits/stdc++.h>

using namespace std;

  
struct compare  
{  
  bool operator()(const int& l, const int& r)  
  {  
      return l > r;  
  }  
};

int main()
{
	int i,n,qx; cin>>n;
	  priority_queue<int,vector<int>, compare > pq;
	for(i=0;i<n;i++) 
	{
		cin>>qx;
		pq.push(qx);
	}
	int count=n-1,x,y;
	  //priority_queue<int,vector<int>, compare >:: iterator x;
	

while(count--)
	{
		//l.sort();
	
		
		x=pq.top(); pq.pop();
		y=pq.top(); pq.pop();
		int z=(x)+(y);
		pq.push(z);
		cout<<"\nand the sum is: "<<z<<endl;
	}

	return 0;
}
