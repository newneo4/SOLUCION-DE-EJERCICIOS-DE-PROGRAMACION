//https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public: 
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>>adjList(V);
        
        for(auto i : edges){
            adjList[i.first].push_back(i.second);
            adjList[i.second].push_back(i.first);
        }
        
        return adjList;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<pair<int,int>>edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u,v});
        }
        Solution obj;
        vector<vector<int>> adj = obj.printGraph(V, edges);
        for(int i=0;i<V;i++)
        {
            sort(adj[i].begin(),adj[i].end());
            for(auto it:adj[i])
                cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends