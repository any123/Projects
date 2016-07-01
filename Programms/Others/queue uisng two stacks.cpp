# include<iostream>          /* matlab hame operation stack ke akrne hai aur result queue ka aana chaaiye*/
# include<stdlib.h>
using namespace std;

class twostacks
{
	int *arr1;
	int *arr2;
	int top1,top2;
	int size;
public:
	twostacks(int n)
	{
		size=n;
		arr1=new int[n];
		arr2=new int[n];
		top1=-1;
		top2=-1;
		
	}
	void push1(int n)
	{
		arr1[top1]=n;
		top1++;
		
	}
	void push2(int n)
	{
		arr2[top2]=n;
		top2++;
	}
	
	int pop1()
	{
		return arr1[top1--];
		
	}
	int pop2()
	{return arr2[top2--];
	}
	void play(int n)
	{
		if(top1==-1)
		push1(n);
		else
		{
			while(top1!=-1)
			{
				int a=pop1();
				push2(a);			
			}
			push1(n);
			while(top2!=-1)
			{
				int b;
				b=pop2();
				push1(b);
			}
		}
	}
	
	
	
	void display()
	{
		for(int i=-1;i<top1;i++)
		{
			cout<<arr1[i];
			cout<<" ";
		}
	}
};
int main()
{
	int n,size;
	twostacks t1(5);
	t1.push1(4);
	t1.push1(2);
	t1.push1(3);
	t1.push1(78);
	t1.push1(23);
	
	cout<<"result is"<<" ";
	t1.display();
	return 0;
}


















	
	
