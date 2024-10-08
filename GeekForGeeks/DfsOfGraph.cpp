//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<bool>visited(V+1,false);
        
        dfs(adj,0,visited,ans);
        
        return ans;
    }
    
    void dfs(vector<int>adj[], int s, vector<bool>&visited, vector<int>&ans){
        visited[s] = true;
        
        ans.push_back(s);
        
        for(int i : adj[s]){
            if(!visited[i]){
                dfs(adj, i, visited,ans);
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends