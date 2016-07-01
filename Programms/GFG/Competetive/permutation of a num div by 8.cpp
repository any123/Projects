# include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll answer[1000]={0};
ll stat=0;
ll swap(ll *a, ll *b)
{
	ll c;
	c=*a;
	*a=*b;
	*b=c;
}

void permute(ll *arr,ll l, ll r)
{
	ll i,j,n,mul=1,ans=0;
	int num_of_digits,count;
	num_of_digits=0;  count=0;	
	if(l==r)
	{
		for(j=r;j>=0;j--)
		{
			ans=ans+(arr[j]*mul);
			mul=mul*10;
			num_of_digits++;
		}
		if(ans%8==0)
		{cout<<"YES\n"; return ;
		}
		else
		{ count++;
		if(count==num_of_digits*2);
		cout<<"NO\n";
		}
	}
	
	if(l!=r)
	{
		
		for(i=l;i<=r;i++)
		{
			swap((arr+l),(arr+i));
			permute(arr,l+1,r);
			swap((arr+l),(arr+i));
		}
	}
	if(count==2*n);
}

int main()
{
	ll count=0,i,t,temp;
	ll arr[100];
	cin>>t;  temp=t;
	while(t--)
	{	ll n;
		cin>>n;
		if(n==0)  { cout<<"YES\n"; exit(0);
		}count=0;
		while(n!=0)
		{
			arr[count++]=n%10;
			n=n/10;
			
		}
		permute(arr,0,count-1);
		
	
	}
	

	return 0;
}
