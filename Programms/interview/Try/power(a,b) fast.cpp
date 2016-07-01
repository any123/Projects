# include<bits/stdc++.h>
using namespace std;

/* Function to calculate x raised to the power y in O(logn)*/
int power(int x, unsigned int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

int main()
{	cout<<"enter x and y for x^y\n";
	int x; unsigned int y; cin>>x>>y;
	
	cout<<power(x,y);
}
