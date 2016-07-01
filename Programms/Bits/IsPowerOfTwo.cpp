# include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
}
int main()
{
	int n; cin>>n;
	if(isPowerOfTwo(n))
	cout<<"Yes it is power of 2 !!!\n";
	else
	cout<<"No it is not power of two !!!\n";
	
}
