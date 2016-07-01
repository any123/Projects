# include<iostream>
# include<string>

using namespace std;

int main()
{
	char s1[3][10],ch;            // 3 string max 10 characters each
	cout<<"enter three strings"<<endl;
	int i;
for (i=0; i<3; i++) {
    cin>>s1[i];
    cout<<s1[i];
}
cout<<endl;
	cout<<"now enter the character"<<endl;
	cin>>ch;
		for(int i=0;i<3;i++)
		{
			if(s1[i][0]==ch)
			cout<<s1[i];	
		}	
	return 0;
}
