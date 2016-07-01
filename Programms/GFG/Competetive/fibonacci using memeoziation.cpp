# include<bits/stdc++.h>

using namespace std;
int arr[10000]={0};
int fib(int n)
{
	if(n==0)  return 0;
	else
	if(n==1)  return 1;
	else
	if(arr[n]!=0)
	return arr[n];
	else
	{
		arr[n]=fib(n-1)+fib(n-2);
		return arr[n];
	}
}

int main()
{
	int n;  cin>>n;
	int a=fib(n);   cout<<a;
}
