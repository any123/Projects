# include<iostream>

using namespace std;


void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	cin>>a>>b;
	swap(&a,&b);
	cout<<"now the numbers are"<<a<<" "<<b;
	return 0;
}
