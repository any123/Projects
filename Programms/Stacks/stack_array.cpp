# include<iostream>

using namespace std;
struct stack
{
	int arr[50];
	int top;
}s1;

void initialize()
{
	s1.top=-1;

}
void display()
{
	for(int i=0;i<s1.top;i++)
	cout<<s1.arr[i];
	
}

int isfull()
{
	if(s1.top>=49)
	return -1;
	else
	return 1;
}

int isempty()
{
	if(s1.top<0)
	return -1;
	else
	return 1;
}


void push(int n)
{
	int a;
	a=isfull();
	if(a==1)
	{
		s1.arr[s1.top]=n;
		s1.top++;
	}
	else
	cout<<"overflow!!!"<<endl;
}






int pop()
{
	int a,item;
	a=isempty();
	if(a==1)
	{
		item=s1.arr[s1.top];
		s1.top--;
	}
	else
	cout<<"underflow!!!"<<endl;
}


int main()
{	struct stack s1;
	int choice,n,ele;
	char ch;
	b:
	cout<<"here are the options for you:"<<endl;
	cout<<"1:push"<<endl<<"2:pop"<<endl<<"3:display"<<endl;
	cin>>choice;
		
		switch(choice)
		{
			case 1:cout<<"enter the element to add"<<endl;
					cin>>n;
					push(n);
					break;
			case 2:ele=pop();
					cout<<"the element deleted is"<<ele<<endl;
					break;
			case 3:
				cout<<"lo ji dekhlo!!!"<<endl;
				display();
				break;
			
		};
			cout<<"want to enter more y/n"<<endl;
				cin>>ch;
				 if(ch=='y'||ch=='Y')
				 goto b;
		

return 0;
		
	
}







