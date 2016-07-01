	# include<bits/stdc++.h>

using namespace std;

void replacewithnextgreater(int arr[],int n)
{
	int i=0;
	list<int> s;
	int x;
	s.push_back(arr[0]);
	list<int>::iterator it;		
	for(i=1;i<n;i++)
	{
		x=arr[i];
		if(!s.empty())
		{ it=s.end();
		s.pop_back();
		while(*it<x){
		cout<<"for element "<<*it<<" "<<x<<" is the next greatir element\n";
		if(s.empty())
		break;
		
		}
		
		if(*it>x)
		s.push_back(*it);
		}
		s.push_back(x);
	}
	
	while(!s.empty())
	{	it=s.end();
		s.pop_back();
		x=-INT_MIN;
		cout<<"for element "<<arr[i]<<" "<<x<<" is the next greatir element\n";
	}
}
int main()
{
	int arr[]={4,8,6,9,2,5};
	int n=6;
	
	replacewithnextgreater(arr,n);
}
