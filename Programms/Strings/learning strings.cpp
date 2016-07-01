# include<iostream>
# include<string>
using namespace std;

int main()
{
	int t;  
		int n; string ch; int a,b,c;
	cin>>t;
	while(t--)
	{
	
		cin>>n; cin>>ch;
		a=ch.find("Y");
		b=ch.find("N");
		c=ch.find("I");
		
		 	if(c>=0) cout<<"INDIAN"<<endl;
			else
			if(a>=0) cout<<"NOT INDIAN"<<endl;	
			else
			cout<<"NOT SURE"<<endl;
		
	}
}
