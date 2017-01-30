# include<bits/stdc++.h>  // See the graph diagram from url  https://www.youtube.com/watch?v=N-SpklnRiC4&feature=youtu.be
using namespace std;       // also the extended version of this question is whether path exist b/w two node or not
			  //http://www.geeksforgeeks.org/find-if-there-is-a-path-between-two-vertices-in-a-given-graph/
			  // add if(*it == destination) return true on line 32 
int n=5;
struct graph
{
 vector<int> v[6];
 bool visited[5];
};
int main()
{


  graph g;
   g.v[0].push_back(0);  g.v[1].push_back(2);
   g.v[2].push_back(0);   g.v[4].push_back(2);
   g.v[3].push_back(2);
   g.v[5].push_back(1); g.v[5].push_back(1); g.v[5].push_back(3); g.v[5].push_back(4);

        vector<int>:: iterator it;
   queue<int>q;
   q.push(5);  g.visited[5]=true;
    int var;
   while(!q.empty())
   {
        var=q.front();
        cout<<var<<" ";
        for( it= g.v[var].begin();it!=g.v[var].end();it++)
        {
              if(!g.visited[*it])
              {
                q.push(*it);
                g.visited[*it]=true;
              }
        }
   q.pop();

   }

}
