#include <bits/stdc++.h>

#define iPair pair<int,int>
#define mk make_pair
#define pb push_back
#define INF 0x3f3f3f3f

using namespace std;

class Grafos
{
private:
    int v;
    vector<vector<iPair>>adj;
public:
    Grafos(int v){
        this->v = v;
        adj.resize(v);
    };

    void addEdge(int v, int u, int w){
        adj[u].pb(mk(v,w));
        adj[v].pb(mk(u,w));
    }

    void djikstra(int root){
        priority_queue<iPair, vector<iPair>, greater<iPair>>pq;

        vector<int>distance(v, INF);
        distance[root] = 0;
        pq.push(mk(0,root));

        while(!pq.empty()){
            int curr = pq.top().second;
            pq.pop();

            for(auto j : adj[curr]){
                int w = j.second;
                int u = j.first;

                if(distance[u] > distance[curr] + w){
                    distance[u] = distance[curr] + w;
                    pq.push(mk(distance[u], u));
                }
            }
        }


        for(int i = 0; i < v; i++){
            cout<<i<<' '<<distance[i]<<endl;
        }
    }
};


int main() {
    Grafos g(4);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 3, 100);

    g.djikstra(0);
 
    return 0;
}