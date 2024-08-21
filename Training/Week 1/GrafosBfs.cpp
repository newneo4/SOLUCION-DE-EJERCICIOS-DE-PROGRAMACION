#include <bits/stdc++.h>

using namespace std;

#define vii vector<int>

void bfs(const vector<vii>&lista, int s, vector<bool>&visited){
    queue<int> q;
    q.push(s);

    visited[s] = true;

    while(!q.empty()){
        int current = q.front();
        q.pop();

        cout<<current<<' ';

        for(auto x : lista[current]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

void addEdge(vector<vii>&lista, int x, int y){
    lista[x].push_back(y);
    lista[y].push_back(x);
}

void printList(vector<vii>&lista){
    
    for(int i = 0; i < lista.size(); i++){
        cout<<i<<"->";
        for(int j = 0; j < lista[i].size(); j++){
            cout<<lista[i][j]<<' ';
        }
        
        cout<<'\n';
    }
}

int main(){
    int v = 5;
    vector <vii>listAdj(v);

    addEdge(listAdj, 2,1);
    addEdge(listAdj, 3,4);
    addEdge(listAdj, 1,3);
    addEdge(listAdj, 2,4);
    addEdge(listAdj, 0,1);

    printList(listAdj);

    vector<bool>visited(v, false);

    bfs(listAdj, 0, visited);

    return 0;
}