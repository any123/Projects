# include<iostream>

using namespace std;

class employee
{
	int id;
	char name[10];
	public:
		void display();
		void getin();
};

void employee :: display()
{
	cout<<"the name of the peron is "<<name<<" and id of the person is"<<id<<endl;
	 
}

void employee :: getin()
{
	cout<<"enter the name and id of the person"<<endl;
	cin>>name>>id;
}

int main()
{
	
	employee emp[3];
	for(int i=0;i<3;i++)
	{
		emp[i].getin();
		emp[i].display();
	}
	return 0;
}
