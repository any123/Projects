# include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n; cin>>m>>n;
	int a[m],curr_ele,sum=0;
	for(int i=0;i<m;i++)
	cin>>a[i];
	
	sort(a,a+n);
	sum=sum+a[m];   ;//cout<<sum<<endl;
	for(int i=m-1;i>=0;i--)
	{	curr_ele=a[i];
		if(a[i]>(n--))
		sum+=curr_ele;
		else
		sum+=n;
		cout<<n<<" ";
		
	}
	cout<<endl<<sum;
}
