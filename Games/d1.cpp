# include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[100];
	int i=0;
	
	while(i<100-1)
{
    scanf("%c",&a[i]);
     if(a[i]=='\n')
        break;
 	i++;
 }
    
	int n=sizeof(a)/sizeof(a[0]);
	cout<<i<<" "<<n<<endl;
}
