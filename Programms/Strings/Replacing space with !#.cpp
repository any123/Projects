# include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	getline(cin,s1);
	int len=s1.size();
	
	for(int i=0;i<len;i++)
	{
		if(s1[i]==' '|| s1[i]=='\t')
		{  len++;
			for(int j=i;j<len;j++)
			s1[j]=s1[j++];
				s1[i]='#';
				i++;
				len++;
			for(int j=i;j<len;j++)
			s1[j]=s1[j++];
				s1[i]='!';
		}
	
	}
	
	cout<<s1;
	
	return 0;
}
