

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n,m,k,h,a[1000],r=0;
    cout<<"Enter the number of element:";
    cin>>n;
    cout<<"Enter the array elements:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    h=log2(n)+1;
    for(i=0;i<h&&r<n-1;i++)
    {
        m=pow(2,h-i-1);
        for(j=0;j<m;j++)
        {
            cout<<" ";
        }
        for(j=0;j<pow(2,i)-1&&r<n-1;j++)
        {
            cout<<a[r];
            r++;
            for(k=0;k<pow(2,h-i)-1;k++)
            {
                cout<<" ";
            }
        }
        cout<<a[r]<<endl;
        r++;
    }
}
