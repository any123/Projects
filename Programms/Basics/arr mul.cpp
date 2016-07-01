# include<iostream>

int main()
{
	int a[10],i,j,n,k=0;
	int b[100],z=1,c=0,x=0,m=0;
	std::cin>>n;
	while(n>0)
	{
		a[k]=n%10;
		n=n/10; k++;
	}
	while(z<=n)
	{
		for(j=0;j<3;j++)
		{                        // i m doing 45*37 i.e 5661
			x=a[j]*z+c; 
			c=x/10; x=x%10;  
			b[j]=x;
			m=m+1;
		}
	
		while(1)
		{
			b[m]=c%10;  
			if(c==0) break;
			c=c/10; m=m+1;
		}        
	
	
	z++;           
	}
	for(i=0;i<m;i++)
	std::cout<<b[i];
	return 0;
}
