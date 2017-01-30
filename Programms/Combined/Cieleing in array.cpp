#include <bits/stdc++.h>

using namespace std;
int searchs(vector<int>arr,int ele,int start,int ends)
{
    if(start>ends) return -1;
    int mid =(start+ends)/2;
    if(ele==arr[mid]) return arr[mid];
    else
    if(ele >arr[mid] && ele < arr[mid+1]) return arr[mid+1];
    else
    if(ele <arr[mid] && ele >arr[mid-1]) return arr[mid];

    if(ele>arr[mid])
    searchs(arr,ele,mid+1,ends);
    else
    searchs(arr,ele,start,mid-1);
}

int main(){
   vector<int>arr(7);
   arr[0]=1; arr[1]=2; arr[2]=8; arr[3]=10; arr[4]=10; arr[5]=12; arr[6]=19;

   cout<< searchs(arr,5,0,6);

    return 0;
}
