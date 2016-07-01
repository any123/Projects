# include<bits/stdc++.h>
using namespace std;
bool check (int N,int i)
{
    if( N & (1 << i) )
        return true;
    else
        return false;
}
int main()
{	int n,i;
  cout<<"Enter the number and the bit you want to check is set or not \n";
  // like for 4 0000 0100 here only 2nd bit is set(starting from LHS and 0)
  cin>>n>>i;
  if(check(n,i))
  cout<<"SET \n";
  else
  cout<<"NOT SET\n";	
}
