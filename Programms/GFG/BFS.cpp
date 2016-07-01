# include<bits/stdc++.h>

using namespace std;

class graph
{
	int v;
	list<int>*adj;
	public:
		graph(int v)
		{
			this->v=v;
			adj=new list<int>[v];
		}
		
		void addedge(int v,int w)
		{
			adj[v].push_back(w);
		}
		
		void BFS(int s)
		{
			bool *visited=new bool[v];
			
			for(int i=0;i<v;i++)
			visited[i]= false;
			
			list<int>q;
			
			visited[s]=true;
			
			q.push_back(s);
			
			list<int>::iterator i;
			while(!q.empty())
			{
				s=q.front();
				cout<<s<<" ";
				q.pop_front();
				
				for(i=adj[s].begin();i!=adj[s].end();i++)
				{
					if(!visited[*i])
					{
						visited[*i]=true;
						q.push_back(*i);
					}
				}
			}
		}
};


int main()
{
	graph g(4);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(1,2);
	g.addedge(2,0);
	g.addedge(2,3);
	g.addedge(3,3);
	
	cout<<"Following is the Breadth First Traversal(starting from vertex 2)\n";
	g.BFS(2);
	
	return 0;
}
