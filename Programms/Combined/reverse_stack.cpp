# include<bits/stdc++.h>
using namespace std;


void insert_at_bottom(stack<int>&s, int data)
{
     if(s.empty() ){
          s.push(data);
          return;
     }
     int temp=s.top();
     s.pop();
     insert_at_bottom(s,data);
     s.push(temp);
}  


void reverse(stack<int>&s)
{
     if( s.empty() ) return;
     
     int temp=s.top();
     s.pop();
     reverse(s);
     insert_at_bottom(s,temp);
}
	
int main()
{
	stack<int>s;
	
	for(int i=1;i<=5;i++) 
	s.push(i);
	
	reverse(s);
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	} 
}
