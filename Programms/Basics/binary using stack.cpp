# include<iostream>
# include<string>

using namespace std;
struct stack
{
	char arr[10];
	int top;
}s1;

void initialize()
{
	s1.top=-1;

}


int isfull()
{
	if(s1.top>=49)
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

void binary(char *ch)
{int i;

	for(i=0;i<5;i++)
	{
		push(ch[i]);
	}
	for(i=s1.top-1;i>=-1;i--)
	cout<<s1.arr[i];
	
	
}





int main()
{	struct stack s1;
	char ch[10];
	initialize();
		cout<<"enter string"<<endl; cin>>ch;
binary(&ch[0]);


return 0;
		
	
}







