#include <bits/stdc++.h>

using namespace std;

bool comp (int &a,int &b){ return abs(a)< abs(b);}

// after sorting simply find the min abs diff b/w two consecutive elements.
int main(){


       int arr[6]={60,1,-10,-80,70,85};

sort(arr,arr+6,comp);

  for(int i=0;i<6;i++) cout<<arr[i]<<" ";

    return 0;
}
