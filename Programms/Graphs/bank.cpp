# include<iostream>
# include<cstring>
using namespace std;
static int count=0,k=0;
long long arr[100]={0};
class bank
{
	long long bal;
	char name[50];
	char account_type;
	long long acc_num;
	
	public:
		bank()
		{   strcpy(name,"ankit");
			account_type='s';
			acc_num=0;
			bal=0;
		}
	
		void enter( )
		{
			cout<<"Enter the following details\n";
			cout<<"Name:\n";fflush(stdin); cin.getline(name,50); fflush(stdin);
			cout<<"Enter the account number :\n"; 
			cin>>acc_num;
			arr[k++]=acc_num;
			cout<<"Amount to add: \n";  cin>>bal;
			cout<<"Savings or Current S/C :\n"; cin>>account_type;
			
		}
		
		void display()
		{
			cout<<"Details are as follows :\n";
			cout<<"Name :"<<name<<endl<<"Account number :"<<acc_num<<endl<<"Current Balance :"<<bal<<endl;
			cout<<"ACcount type :"<<account_type;
			cout<<endl;
		}
			void display_bal(long long add ){
				bal+=add;
			cout<<bal<<endl;
		}
		void minus(long long sub)
		{
			bal=bal-sub;
			cout<<bal<<endl;
		}

};

		int search(long long num)
		{ int i,k=0;
		 for(int j=0;j<k;j++)
		 		if(arr[j]==num)
				 return j;
		}
int main()
{  
	bank b[10];
	long long num;
	int ch,i=0,count=0;
	while(1)
	{
	cout<<"Enter the choice to continue :\n";
	cout<<"1: New Account\n2: Display \n3: Add Amount \n4: Withdraw Amount\n";
	cin>>ch;
	switch(ch)
	{ int j;
		case 1:
			b[i].enter();

			break;
			
		case 2:
			cout<<"Plz enter the account_number :\n";
			cin>>num; 
			j=search(num);
			if(!j) cout<<"Record Not Found !!!\nPlease Enter Valid Infomaration :\n";
			else
			b[j].display();
			break;
			
			case 3:		
				cout<<"Plz enter the account_number :\n";
				cin>>num; 
				j=search(num);
				if(j==99) cout<<"Record Not Found !!!\nPlease Enter Valid Infomaration :\n";
				else
					{
						cout<<"Enter the amount to add\n"; long long add; cin>>add;
						cout<<"Money Added SUCCESSFULLY !!!\n";
						cout<<"Your current balance is :\n";
						b[j].display_bal(add);
					}
				break;
			
			case 4:
					cout<<"Plz enter the account_number :\n";
					cin>>num; 
					j=search(num);
					if(j==99) cout<<"Record Not Found !!!\nPlease Enter Valid Infomaration :\n";
					else
					{  long long sub;
						cout<<"Enter the amount to withdraw\n"; long long add; cin>>sub;
						cout<<"Money Withdrwan SUCCESSFULLY !!!\n";
						cout<<"Your Current balance is :\n";
						b[j].minus(sub);
					}
			break;
			default:
				cout<<"Wrong choice\n";
				break;
	}
	char h='y';
	cout<<"Do you wish to enter more(Y/N) ??\n";
	cin>>h;
	if(h=='n'||h=='N')
	break;
	else {i++; count++;
	}
	
	}
		

}









