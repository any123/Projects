#include <bits/stdc++.h>

using namespace std;
#define N 100
//bool comp (int &a,int &b){ return abs(a)< abs(b);}

// after sorting simply find the min abs diff b/w two consecutive elements.
//1 1 3
//1 2 2

vector<vector<int>> fun(vector<vector<int>>  &arr)
{       int i,j,counts=0;
    for(i=arr.size()-1;i>=0;i--)
    {
        for(j=arr[i].size()-1;j>=0;j--)
        {
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return arr;
}
int main(){


        int t;  cin>>t;
         while(t--)
        {   int i,j;
            
       vector<vector<int>> arr(6, vector<int>(6,0));

                arr = fun(arr);
                cout<<endl<<endl;
		// 	vector<vector<int>>v={{1,2,3},{4,5,6,7}};       u can declare this way also

    for(i=arr.size()-1;i>=0;i--)
    {
        for(j=arr[i].size()-1;j>=0;j--)
        {
            //arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        }

    return 0;
}
