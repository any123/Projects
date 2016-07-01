# include<iostream>

# include<string.h>

using namespace std;

int main()
{	char s1[10],s2[10];
	int a,b;
	char ans;
	int static k; 
	aim:
	cout<<"enter two strings"<<endl;
	gets(s1);
	gets(s2);
	cout<<s1<<endl<<s2;
	a=strlen(s1); b=strlen(s2);
	if(a==b)
	{	for(int i=0;i<a;i++)
			{
				for(int j=b;j>0;j++)
				{
					if(s1[i]==s2[j])
					{
						k=1; break;
					}
						else
						k=0;
						continue;
				}
				
			}	
		
		if(k==1) cout<<endl<<"strings equal"<<endl;
		
	}else
	cout<<"-1"<<endl;
	cout<<"want to enter more y/n"<<endl;
	cin>>ans;
	if(ans=='y'||ans=='Y') goto aim;
	return 0;
}
	
	
	
	
	
	
	
	
		
	
	

