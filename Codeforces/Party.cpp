#include <bits/stdc++.h>

#define graph vector<vector<int>>
#define pb push_back
#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int dfs(graph &employee, int n, int s){
    int max_depth = 1;
    
    for(int i : employee[s]){
        max_depth = max(max_depth,1 + dfs(employee, max_depth, i));
    }
    
    return max_depth;
}

int dfsUnconnected(graph& employee, int v){
    int steps = 0;
    
    for(int i = 0; i < employee.size(); i++){
        int temp = 0;
        temp = dfs(employee, temp, i);
        
        steps = max(steps, temp);
        
    }

    return steps;
}

void addEdge(graph& employees, int x, int y){
    employees[y].pb(x);
}

void printGraph(const graph& employees){
    for(int i = 0; i < employees.size(); i++){
        cout << i+1 << "->";
        for(int j = 0; j < employees[i].size(); j++){
            cout << employees[i][j] + 1 << ' '; 
        }

        cout << '\n';
    }
}

int main(){
    fastIO;

    int n, p = 0; 
    cin >> n;

    graph employees(n);

    for(int i = 0; i < n; i++){
        int temp; 
        cin >> temp;
        if(temp != -1) {
            addEdge(employees, i, temp-1);
        }
    }

    cout<<dfsUnconnected(employees, n);
    
    return 0;
}
