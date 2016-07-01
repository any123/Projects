# include<iostream>

using namespace std;

int fib(int a,int b,int n)
{
	int sum=a+b;
	cout<<" "<<sum;
	if(n>0)
	fib(b,sum,n-1);
	
}

int main()
{
	int a,b;
	cout<<"enter a"<<endl; cin>>a;
	cout<<"1 1";
	b=fib(1,1,a);
	
	return 0;
}
