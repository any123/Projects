#include <bits/stdc++.h>

using namespace std;

# define ll long long int
/* The  steps are follows
    1: create two heaps , a max heap for lower half and a min heap for upper half
    2: while adding numbers check if currrent element is lower than median if it is; add it into lower heap i.e max heap else add it in higher heap
    3: while returning median see if both heap sizes are equal if it is return avg of them else return top element of bigger heap

*/

void addnumber(priority_queue<int>&lower,priority_queue<int,vector<int>,greater<int>> &higher,int num)
{
        if(lower.empty() || num<lower.top())
        lower.push(num);
        else
        higher.push(num);

}
  void rebalance(priority_queue<int>&lower,priority_queue<int, vector<int> , greater<int>> &higher)
  {
        if(abs(lower.size()-higher.size())>=2)
        {
            if(lower.size() > higher.size())
            {int x= lower.top(); lower.pop(); higher.push(x);
            }
            else
            {int x= higher.top(); higher.pop(); lower.push(x);
            }
        }
  }

  double getmedian(priority_queue<int>&lower,priority_queue<int, vector<int> , greater<int>> &higher)
  {
        if(abs(lower.size()-higher.size())>=1)
            {
                if(lower.size()>higher.size())
                return lower.top();
                else
                return higher.top();

            }
            else
            if(lower.size()==higher.size())
            return (double(lower.top()+higher.top())/2);

  }
    int main()
    {
        vector<int>arr{2,4,3,5,1,6};

        int i,n=arr.size();
        priority_queue<int>lower;  //max heap
        priority_queue<int,vector<int>,greater<int>>higher; //min heap

        int number;
        for(i=0;i<n;i++)
        {
            number=arr[i];
            addnumber(lower,higher,number);
            rebalance(lower,higher);
        }
        cout<<getmedian(lower,higher);

        return 0;
    }
