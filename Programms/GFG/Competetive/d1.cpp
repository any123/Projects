#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{ int i;
for(i=1;i*i<=n;i++)
	if((i*i)==n)
		return true;
	return false;

}
int main()
{
	int n; cin>>n;
	if(check(n)) 
	cout<<"perfect square !!!\n";
	else
	cout<<"Not!!!\n";
	
	
}
