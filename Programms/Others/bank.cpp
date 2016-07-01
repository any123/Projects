# include<iostream>

using namespace std;
class bank
{	private:
	int amt;
	int amt_sub;
	int amt_add;
	public:
	
	void ADD(int a)
	{	int b;
		cout<<"enter the amt to add"<<endl;
		cin>>b;
		cout<<"the new balance is"<<a+b;
		
		
		
		
	}
	void SUB(int a)
	{		int b;
		cout<<"enter the amt to be debited"<<endl;
		cin>>b;
		if(b>a)
	
		{
		cout<<"not possible"<<endl<<"enter again. your current balance is"<<a;}
		else
		cout<<"your balance is"<<a-b;
		
	}
	
	void display(int a)
	{
		cout<<"your current balance is"<<a;
	}
};
int main()
{
	bank b1;
	int a,c,d;
	cout<<"enter the principle amount"<<endl;
	cin>>a;
	int ch;

	cout<<"enter 1 to add"<<endl<<"2 to withdraw"<<endl<<"3 to display"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			b1.ADD(a);
			break;
		
		case 2:
			b1.SUB(a);
			break;
		
		case 3:b1.display(a);
		break;
		
		default:
			cout<<"wrong choice"<<endl;
		}
	
	return 0;
	
	
	
	
}



















