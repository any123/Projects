# include<bits/stdc++.h>
using namespace std;
int count_one (int n)
    { int count=0;
        while( n )
        {
        n = n&(n-1);
           count++;
        }
        return count;
}
int main()
{
	int n;
	cout<<"enter the number to count no. of ones in it!!!\n";
	cin>>n;
	cout<<count_one(n)<<" ones are present in the number "<<n;
	return 0;
}
