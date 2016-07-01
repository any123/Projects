
# include<bits/stdc++.h>
using namespace std;

int main()
{
	int sum,n,b,a,k,t;
	cin>>t;
	while(t--)
	{	sum=0; a=1;
		cin>>n;
		 
		while(n>=pow(5,a))
		{ 
			b=pow(5,a);
		k=n/b;
			sum=sum+k; 
			++a;
			
		}
		cout<<sum<<"\n";
	}
	
}
