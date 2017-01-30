#include <map>   https://www.hackerrank.com/challenges/2d-array
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
   int arr[6][6]=
{{1 ,1 ,1 ,0 ,0 ,0},
{0 ,1 ,0 ,0 ,0 ,0},
{1 ,1 ,1 ,0 ,0 ,0},
{0 ,0 ,2 ,4 ,4 ,0},
{0 ,0 ,0 ,2 ,0 ,0},
{0 ,0 ,1 ,2 ,4 ,0} };

int i,j=0,curr_sum=0,maxi=-999;

    for(i=0;i<=3;i++)
    {   curr_sum=0;
       for(j=0;j<=3;j++)
       {
        curr_sum=0;

        curr_sum+=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+1];
        if(curr_sum>maxi)
        maxi=curr_sum;
       }

    }
    cout<<maxi<<endl;


    return 0;
}
