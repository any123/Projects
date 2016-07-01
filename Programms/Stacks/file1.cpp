# include<iostream>
# include<fstream>
using namespace std;

int main()
{
	char name[100000]; int p=800;
	ifstream fin("Update.doc");
	fin.getline(name,p);
	cout<<name;
	
}
