# include<bits/stdc++.h>      // another extension of BFS https://www.hackerrank.com/challenges/bfsshortreach
using namespace std;

struct graph
{
    vector<int>v[100];
    bool visited[100];
};
int main()
{
  int t; scanf("%d",&t);


  while(t--)
  {
            graph g;
            int start=0,ends=0;
            memset(g.visited,false,sizeof(g.visited));
            int nodes,edges ; scanf("%d%d",&nodes,&edges);
            for(int i=0;i<edges;i++)
            {
              scanf("%d%d",&start,&ends);
              g.v[start].push_back(ends);
            }

            int start_node; scanf("%d",&start_node);

            g.visited[start_node]=true;
            queue<int>q;
            q.push(start_node); int c=0;
        int arr[nodes],k=0,i;  vector<int>:: iterator it;
            while(!q.empty())
            {
                int x=q.front(); q.pop();  c++;
                for(it=g.v[x].begin();it!=g.v[x].end();it++)
                {
                    if(g.visited[*it]==true)
                    {arr[k++]=-1;}
                    else
                    {
                        g.visited[*it]=true;
                        arr[k++]=c*6;
                    }

                }
            }

            for(i=k;i<nodes-1;i++)
            arr[i]=-1;

            for(i=0;i<nodes-1;i++) cout<<arr[i]<<" ";

            cout<<endl;
  }

}
