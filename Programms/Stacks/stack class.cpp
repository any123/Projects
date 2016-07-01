# include<iostream>
# include<stdlib.h>

using namespace std;

struct stack
{	
	int top;
	int array[5];
}s1;

void intiliaze()
{
	s1.top=-1;
}

int isfull()
{
	if(s1.top>=4)
	return -1;
	else return 1;
}

int isempty()
{	
	if(s1.top<0)
	return -1;
	else
	return 1;
	
}




void push(int n)
{	int a;
	a=isfull();
	if(a==1)
	{
		
		s1.array[++s1.top]=n;
	}
	else
	cout<<"overflow"<<endl;
}



int  pop()
{
	int a,b;
	a=isempty();
	if(a==1)
	{
		b=s1.array[s1.top--];
	}
	else 
	cout<<"underflow!!"<<endl;
	return b;
}

void display()
{
	for(int i=0;i<=s1.top;i++)
	{
		cout<<s1.array[i]<<" ";
		
	}
}


int main()
{
	char ans;
	int ch,ele;
	struct stack s1;
	intiliaze();
	b:
	cout<<"enter the choice you want to use:"<<endl;
	cout<<"1:add 2:pop 3:display"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"now enter an element:"<<endl;
			cin>>ele;
			push(ele);
		break;
		
		case 2: cout<<"the deleted element is:"<<pop();
		
		break;
		case 3:
				cout<<"lo ji dekhlo!!"<<endl;
				display();
	}
	cout<<"want to enter more huh??"<<endl;
	cin>>ans;
	if(ans=='y'||ans=='Y')
	goto b;
	return 0;
	
}



