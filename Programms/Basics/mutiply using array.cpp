# include<iostream>

int main()
{
	int a[2]={5,4},i,j;
	int b[6],c=0,x=0,m=0;
		for(j=0;j<2;j++)
		{                        // i m doing 45*37 i.e 5661
			x=a[j]*37+c; 
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
	
	for(i=0;i<m;i++)
	std::cout<<b[i];
	return 0;
}
