# include<bits/stdc++.h>

using namespace std;

class graph
{
	int v;
	list<int>*adj;
	public:
		graph(int v)				// 	LW D is two times B hence two functions
		{
			this->v=v;
			adj=new list<int>[v];
		}
		
		void addedge(int v,int w)
		{
			adj[v].push_back(w);
		}
		
		void DFSutil(int v,bool visited[])
		{
			visited[v]=true;
			cout<<v<<" ";
			
			list<int>::iterator i;
			for(i=adj[v].begin();i!=adj[v].end();++i)
			if(!visited[*i])
			DFSutil(*i,visited);
		}
		void DFS(int v)
		{
			bool *visited=new bool[v];
			for(int i=0;i<v;i++)
			visited[i]=false;
		
			DFSutil(v,visited);
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
	
	cout<<"Following is the Depth First Traversal\n";
	g.DFS(2);
	
	return 0;
}
