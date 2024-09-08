#include <bits/stdc++.h>

using namespace std;

struct Grafo{
    int src;
    int dest;
    int weight;
};

class Grafos
{
    private:
        int v, e;
        vector<Grafo>rel;

    public:
        Grafos(int v, int e){
            this->e = e;
            this->v = v;
            rel.resize(e);
        };

        void addEdge(int src, int dest, int w, int i){
            rel[i].src = src;
            rel[i].dest = dest;
            rel[i].weight = w;
        }

        void bellmanFord(int src){
            
            vector<int>dist(v, INT_MAX);

            dist[src] = 0;

            for(int i = 0; i < v; i++){
                for(int j = 0; j < e; j++){
                    int ini = rel[j].src;
                    int end = rel[j].dest;
                    int w = rel[j].weight;

                    if(dist[src] != INT_MAX){
                        dist[end] = min(dist[end], dist[ini] + w);
                    }
                }
            }

            for(int j = 0; j < e; j++){
                int ini = rel[j].src;
                int end = rel[j].dest;
                int w = rel[j].weight;

                if(dist[ini] != INT_MAX && dist[ini] + w < dist[end]){
                    cout<<"Hay un ciclo";
                    return;
                }
            }
        }
};


int main(){
    int v = 5, e = 8;

    Grafos graph = Grafos(v, e);

    graph.addEdge(0,1,-1,0);
    graph.addEdge(0,2,4,1);
    graph.addEdge(1,2,3,2);
    graph.addEdge(1,3,2,3);
    graph.addEdge(1,4,2,4);
    graph.addEdge(3,2,5,5);
    graph.addEdge(3,1,1,6);
    graph.addEdge(4,3,-3,7);

    graph.bellmanFord(0);

    return 0;
}