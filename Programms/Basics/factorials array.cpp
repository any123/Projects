# include<iostream>
#define max 200
using namespace std;

	int multiply(int x,int a[],int size);

	void factorial(int n)
	{
		int a[max];
		a[0]=1;
		int size=1;
		for(int x=2;x<=n;x++)
		size=multiply(x,a,size);
		for(int i=size-1;i>=0;i--)
		cout<<a[i];
		cout<<"\n";

	}	
	
	int multiply(int x,int a[],int size)
	{
		int c=0,j,p;
	
		for(j=0;j<size;j++)
		{                        // i m doing 45*37 i.e 5661
			p=a[j]*x+c; 
			c=p/10; a[j]=p%10;  
			
		}
	
		while(c)
		{
			a[size]=c%10;  
			c=c/10;
			 size=size+1; 
		}
		return size;
	}                          
	
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
		 int n; 
		 cin>>n;
			factorial(n);
			
		}
		return 0;
	}
