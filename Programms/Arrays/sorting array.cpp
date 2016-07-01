# include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int a[10];
	int k;
	cout<<"enter 5 no.s"<<endl;
	for(int i=0;i<4;i++)
	cin>>a[i];
	do{
		for(int i=0;i<4;i++)
		{
			for(int j=i+1;j<4;j++)
			{
				if(a[i]<a[j])
				{
					swap(&a[i],&a[j]);
					k=1;
						
				}
				else k=0;
			}
		}
	}while(k==1);
	for(int l=0;l<4;l++)
	{
		cout<<a[l];	
	}
		return 0;
}
