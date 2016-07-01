#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find(int n)
    {
    while(n)
        {
        if(n%3==0) break; else n-=5;
    }
    return n;
}

int main(){
    int t;
    cin >> t;
   while(t--)
       {
       int n; cin>>n;
       int  a,b;
       
       a=find(n);
       
       if(a<0)
           cout<<"-1\n";
       else
           {
           b=a/3;
           while(b--)
               cout<<"555";
               b=(n-a)/5;
               
               while(b--) cout<<"33333";
           cout<<endl;
       }
   }
    return 0;
}

