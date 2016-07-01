# include<bits/stdc++.h>

using namespace std;

void interleave(char *s1,char *s2,char *istr,int m,int n,int i)
{  static int a=m,b=n;
	if(m==0 && n==0)
	{
	for(int i=0;i<a+b;i++)
	cout<<istr[i];
	}
	cout<<" ";
	if(m!=0)
	{
		istr[i]=s1[0];
		interleave(s1+1,s2,istr,m-1,n,i+1);
	}
	
	
	if(n!=0)
	{
		istr[i]=s2[0];
		interleave(s1,s2+1,istr,m,n-1,i+1);
	}
}
void print(char *s1,char *s2,int m,int n)
{
	char *istr=(char*)malloc((m+n+1)*sizeof(char));
	istr[m+n]='\0';
	
	interleave(s1,s2,istr,m,n,0);
	

}
int main()
{
	char s1[10],s2[10];
	for(int i=0;i<2;i++) cin>>s1[i];
	for(int i=0;i<2;i++) cin>>s2[i];
	print(s1,s2,2,2);
}
