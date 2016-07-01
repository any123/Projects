# include<iostream>

using namespace std;

int main()                                   // use always n-1 in loop
{
	int a[5]={9,1,2,4,3};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<4;i++ )
	{
		for(int j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int c;
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
				
			}	
			
		}
	}
	
	for(int i=0;i<5;i++)
	cout<<a[i];
	return 0;
}
