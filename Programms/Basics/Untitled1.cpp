# include<stdio.h>
# include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
	int a[n],b[n],i=0,j=0,count=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	i=0;j=0;
		while(1)
	{
		if(a[i]<=b[j])
		{
			count++; i++; j++;
		}
		else 
		j++;
		if((i==n)||(j==n))
		break;
	}
	printf("%d\n",count);
	
	}
	return 0;
}
