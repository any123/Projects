# include<bits/stdc++.h>
using namespace std;


void insert_at_bottom(stack<int>&s, int data)
{
	
     if(s.empty() ){
          s.push(data);
          return;
     }
		
		if(s.top() < data)
		{
			int temp=s.top();
			s.pop();
			insert_at_bottom(s,data);
			s.push(temp);
		}
		else
		{
			s.push(data);
			return;
		}
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
	
	
	s.push(3); s.push(2); s.push(1);  s.push(5);  s.push(4);
	
	reverse(s);
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	} 
}
