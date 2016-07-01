# include<bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2;
	scanf("%d",&n1);
	
	int a[n1],i,j;
	for(i=0;i<n1;i++) scanf("%d",&a[i]);
	
	sort(a,a+n1);
scanf("%d",&n2);
	
	int b[n2];
	for(i=0;i<n2;i++) scanf("%d",&b[i]);	
	
	sort(b,b+n2);
	int output[n2-n1];
	j=0; i=0; int k=0;
	if(n2>n1)
	{
		while(n1!=0)
	{
		if(a[j]==b[i])
		{
			n1--; n2--;
			i++; j++;
			
		}else
		{
		   	output[k++]=b[i];
		   	i++; n2--;
		}
		
	}
	}
	else
	{
		while(n2!=0)
	{
		if(a[j]==b[i])
		{
			n1--; n2--;
			i++; j++;
			
		}else
		{
		   	output[k++]=a[j];
		   	j++; n1--;
		}
	}
	}
	
	for(i=0;i<k;i++)
	printf("%d ",output[i]);
	
}
