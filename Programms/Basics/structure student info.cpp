# include<iostream>

using namespace std;

struct student
{
	int roll;
	char name[5];
};



int main()                      // note the name array difference at declare and in cout cin//
{ int i=0;
	struct student s[3];
		cout<<"roll no."<<endl;
	cout<<"name"<<endl;
	 for(i=0;i<3;++i)
	 {cin>>s[i].roll;
	 cin>> s[i].name;
   	}
	   int x;
   cout<<endl;
   for(i=0;i<3;i++)
   {
   	cout<<s[i].name;
   	cout<<" ";
   	cout<<s[i].roll;
   	cout<<endl;
   }
   cout<<"enter roll no. u want to search:"<<endl;
   cin>>x;
   for(i=0;i<3;i++)
   	if(x==i) cout<<s[i-1].name;
   return 0;
}
