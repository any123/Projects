# include<iostream>
# include<stdlib.h>

using namespace std;

class twostack
{
	int top;
	int arr[20];
	int size;	
public:
	void inilize()
	{
		top=0;
	}
	void push(int *arr,int n)
	{
		arr[top]=n;
		top++;
	}
	int pop(int *arr)
	{
		int a;
		a=arr[top];
		top--;
	}
	void display()
	{for(int i=0;i<top;i++)
	{
		cout<<arr[i];
	}
	}
};
int main()
{
	int m;
	int arr[20];
	for(int i=0;i<3;i++)
	{
	cin>>arr[i];
	}
	twostack s1[3];
	s1.inilize();
	for(int i=0;i<3;i++)
	{
		cout<<"press 1 to add to first stack else press 2"<<endl;
		cin>>m;
		if(m==1)
		s1.push(&arr[0],arr[i]);
		else
		s2.push(&arr[0],arr[i]);
	}
	
	s1.display();
	cout<<endl;
	
	s2.display();
}
