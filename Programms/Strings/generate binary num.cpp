# include<iostream>

using namespace std;

int main()
{	int  static i;
	int num,k[100];
	cin>>num;
	while(num>0)
	{
		k[i]=num%2;
		num=num/2;
		i++;
	}
	while(i>0)
	{
		cout<<k[i];
		i--;
	}
	return 0;
}
