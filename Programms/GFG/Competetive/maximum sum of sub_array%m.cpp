#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;

#define ll long long int
int main() {
     
int t;  cin>>t;
    
    while(t--)
        {
            set<int>s;
    ll sum=0,ans=0;
    
    int n,m;  cin>>n>>m;
    int arr[n];
    for(int i=1;i<=n;i++)
       cin>>arr[i];
    
   
    set<int>:: iterator j;
    
    for(int i=1;i<=n;i++)
        {
        sum=sum+arr[i];
        sum=sum%m;
        j=s.upper_bound(sum);
        
        if(j!=s.end())
            ans=max(ans,sum-(*j)+m);
        else
            ans=max(ans,sum);
        s.insert(sum);
        
    }
    cout<<ans<<endl;
    }
    return 0;
}

