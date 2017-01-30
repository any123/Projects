#include <bits/stdc++.h>

using namespace std;

# define ll long long int

void generateallpossbilesubsets(vector<int>&current,vector<int>&A,int index,vector<vector<int>> &result)
    {
        if(index>=A.size())  // > beacause we r one time not including subsets nd 2 time including
        {
        result.push_back(current);
        return;
        }

        generateallpossbilesubsets(current,A,index+1,result);  // ignore adding subset

        current.push_back(A[index]);
        generateallpossbilesubsets(current,A,index+1,result);       //add subset
        current.pop_back();
    }

    vector<vector<int>> subset(vector<int>&A)
    {
        vector<vector<int>> result;
        vector<int>current;
        sort(A.begin(),A.end());
        generateallpossbilesubsets(current,A,0,result);
        sort(result.begin(),result.end());
        return result;
    }


    int main()
    {
        vector<int>A{1,2,3,4};
        vector<vector<int>> ans;
            ans=subset(A);
            for(int i=0; i<ans.size();i++)
            {
                for(int j=0;j<ans[i].size();j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
            
           
        return 0;
    }
