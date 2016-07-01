# include<bits/stdc++.h>
using namespace std;
# define size 1e5
int fact[1000000];
int factorial(int n)
{
	
	if(n==0 || n==1)
	return 1;
	else
	if(fact[n]!=0)
	  return fact[n];
	  else
	    return fact[n]=n*factorial(n-1);
}
int  main()
{	int t;cin>>t;
	while(t--)
	{
	memset(fact,0,sizeof(fact));
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	}
}
