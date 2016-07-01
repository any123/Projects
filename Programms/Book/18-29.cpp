# include<bits/stdc++.h>

using namespace std;
long long int power(int k,int n)
{ long long int a=1;
	if(k==0) return 1;
	else
	{
		if(n%2==1)
		{
			a=power(k,n-1);
			return a*k;
		}
		else
		if(n%2==0)
		{
			a=power(k,n/2);
			return a*a;
		}
	}
}
int main()
{
	int k,n;
	cout<<"Enter the value of k and n to find k power n:\n";
	cin>>k>>n;
	long long int j=power(k,n); cout<<j;
}
