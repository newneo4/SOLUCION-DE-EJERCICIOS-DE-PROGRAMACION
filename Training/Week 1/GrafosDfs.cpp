#include <bits/stdc++.h>

#define listAdj vector<vector<int>>
#define pb push_back

using namespace std;

void dfs(listAdj &lista, int s, vector<bool>&visited){
    visited[s] = true;
    cout<<s<<' ';

    for(int i : lista[s]){
        if(!visited[i]){
            visited[i] = true;
            dfs(lista, i, visited);
        }
    }
}

void dfsStack(listAdj &lista, int s, vector<bool>&visited){
    stack<int>q;
    q.push(s);

    visited[s] = true;

    while(!q.empty()){
        int current = q.top();

        cout<<current<<' ';

        for(int i : lista[current]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }

        
    }
}

void addEdge(listAdj &lista, int x, int y){
    lista[x].pb(y);
    lista[y].pb(x);
}

void printGraph(const listAdj lista){
    for(int i = 0; i < lista.size(); i++){
        cout<<i<<"->";
        for(int j = 0; j < lista[i].size(); j++){
            cout<<lista[i][j];
        }

        cout<<'\n';
    }
}

int main(){
    int v = 5;
    listAdj nodos(v);

    addEdge(nodos,1,2);
    addEdge(nodos,3,2);
    addEdge(nodos,4,1);
    addEdge(nodos,3,4);
    addEdge(nodos,0,1);
    
    printGraph(nodos);

    vector<bool>visited(v,false);

    dfs(nodos,0, visited);

    return 0;
}