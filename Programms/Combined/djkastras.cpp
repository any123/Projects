# include<bits/stdc++.h>

using namespace std;

#define INF 9999

  vector<int>g[8];
   vector<bool>visited(8);
   
   typedef pair<int, int> PAIR;
   
   struct cmp {
        bool operator()(const PAIR &a, const PAIR &b) {
            return a.second > b.second;
        };
    };
   
   void initialize()
   {
	   g[0].push_back(1); g[0].push_back(2);
	g[1].push_back(0); g[1].push_back(2);  g[1].push_back(7);
	g[2].push_back(1); g[2].push_back(3); g[2].push_back(5); g[2].push_back(8);
	g[3].push_back(2); g[3].push_back(4); g[3].push_back(5);
	g[4].push_back(3); g[4].push_back(5);
	g[5].push_back(2); g[5].push_back(3); g[5].push_back(4); g[5].push_back(6);
	g[6].push_back(5);   g[6].push_back(7); g[6].push_back(8); 
	g[7].push_back(0); g[7].push_back(1); g[7].push_back(6); g[7].push_back(8);
	g[8].push_back(2); g[8].push_back(6); g[8].push_back(7);
   }
int main()
{
	
	initialize();
	
	unordered_map<int, int> dict = {{0,0},{1,INF}, {2,INF}, {3,INF}, {4,INF}, {5,INF}, {6,INF}, {7,INF}, {8,INF}};
	
    priority_queue<PAIR, vector<PAIR>, cmp> min_heap(dict.begin(), dict.end());
    
    visited[0]=true;
    
    vector<int>::iterator v;
	while (!min_heap.empty()) {
        PAIR us = min_heap.top();
        min_heap.pop();
        int u=us.first;
        
        for(v=g[u].begin();v!=g[u].end();v++)
        {
			if(visited[v]==false && dict[v].second > dict[u].second + 
		}
        
        
    }
	
}
