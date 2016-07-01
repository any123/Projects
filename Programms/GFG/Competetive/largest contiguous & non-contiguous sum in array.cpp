#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max(a,b) a>b?a:b
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
        { int n,i;  cin>>n;
        int arr[n];
         for(i=0;i<n;i++) 
             cin>>arr[i];
         
         int new_sum=0,sum=0;
         int ans1,ans2;
         for(i=0;i<n;i++)						// this loop for contiguous sum   LW 3 steps inside loop
             {
             sum=sum+arr[i];
             if(sum<0)  sum=0;
             if(sum>new_sum)   new_sum=sum;
         }
         ans1=new_sum;
         
         
         sum=0;
         sort(arr,arr+n);
         for(i=n-1;i>=0;i--)					// this loop for non-contiguous sum
             {
             if(arr[i]>0)
             sum=sum+arr[i];
             else
             break;
         }
         cout<<ans1<<" "<<sum<<endl;
         
            
    }
    return 0;
}

