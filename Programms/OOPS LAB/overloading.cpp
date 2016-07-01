# include<iostream>

using namespace std;

int sum(int a,int b,int c)
{
	return a+b+c;
}

int sum(int a,int b)
{
	return a+b;
}

void sumf(int a,int c)
{
	cout<<"  and the sum of first and last is "<<a+c<<endl;

}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"the sum of three values is "<<sum(a,b,c)<<endl;
	cout<<" the sum of two no.s is "<<sum(a,b)<<endl;
	sumf(a,c);
	return 0;
	
}

