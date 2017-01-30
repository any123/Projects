# include<bits/stdc++.h>
using namespace std;    // see the figure at https://youtu.be/Y40bRyPQQr0
						// for topological sorting pass stack also  in DFS function along with other and 
						//add stack.push(v); on line 25 below
struct graph
{
  vector<int> s[7];
  bool visited[7];
}g;

void dfs(int v)
{

    vector<int>:: iterator it;


       g.visited[v]=true;
       cout<<v<<" ";

       for(it=g.s[v].begin();it!=g.s[v].end();it++)
        {
            if(!g.visited[*it])
            dfs(*it);
        }

}
int main()
{
 // for modifications in this code see written-programm.txt
    
 g.s[0].push_back(0);
 g.s[1].push_back(2); g.s[1].push_back(3); g.s[1].push_back(4);
 g.s[2].push_back(1); g.s[2].push_back(4); g.s[2].push_back(5);
 g.s[3].push_back(1); g.s[3].push_back(5);
 g.s[4].push_back(2); g.s[4].push_back(5); g.s[4].push_back(6);
 g.s[5].push_back(2); g.s[1].push_back(3); g.s[1].push_back(4);
 g.s[6].push_back(4); g.s[6].push_back(5);


   for(int i=0;i<7;i++)
     g.visited[i]=false;

     g.visited[1]=true;
     cout<<1<<" ";

        for (int i = 1; i < 7; i++)
        if (g.visited[i] == false)
            dfs(i);





}
