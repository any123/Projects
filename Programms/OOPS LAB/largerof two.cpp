# include<iostream>

using namespace std;

int larger(int a,int b)
{
	if(a>b)
	return a;
	else return b;
	
}

void display(int a,int b)
{
	cout<<"the larger of the two is "<<larger(a,b);
}
int main()
{	int a,b;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	display(a,b);
	return 0;
}
