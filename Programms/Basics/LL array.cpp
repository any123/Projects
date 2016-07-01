# include<iostream>

using namespace std;
# define size 100
int head=0;
struct node
{
	int data;
	int next;
}a[size];

void initializ()
{
	a[size-1].next=-1;
}
void insert(int x,int i)   
{	
	if(a[i].next==-1)
	cout<<"overflow!! ";
	else
	{   
		
	a[i].data=x;
	a[i].next=i;
	}    
}   

void delet(int x)                                 
{
	for(int i=0;i<size;i++)
	{
		if(x==a[i].data)
		{
		a[i].next=-2;
		}
	}
}

 void display()
 {
 	int i;
 	for(i=0;i<size;i++)
 	{
 			if(a[i].data==0) 
 			cout<<"";
 			else
 			cout<<a[i].data<<" ";
 			if(a[i+1].next==-2)
 			i++;
 	}
 	cout<<endl;
 	
 }
 
 int main()
{	int ch,x,i=0; char ans;
	initializ();
		do
	{
		cout<<"1 INSERT 2 DELETE "<<endl;
		 cin>>ch;
		switch(ch)
		{
			case 1: cout<<"enter the element to add"<<endl; cin>>x;
			insert(x,i); i++; display();
			break;
			
			case 2: cout<<"enter element to delete\n";	cin>>x;
			delet(x); display();
			break;
		}	
		cout<<"wish to continue "<<endl;
		cin>>ans;
	}while(ans=='y'||ans=='Y');
	return 0;
}





















