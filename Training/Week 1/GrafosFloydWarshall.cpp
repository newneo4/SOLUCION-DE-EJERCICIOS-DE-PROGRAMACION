#include <bits/stdc++.h>

using namespace std;

#define vii vector<vector<int>>
#define pb push_back
#define INF 0x3f3f3f3f

int v = 4, n = 4;

void floydWarshall(vii &matrizAdj){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(matrizAdj[j][i] != INF && matrizAdj[i][k] != INF){
                    matrizAdj[j][k] = min(matrizAdj[j][k], matrizAdj[j][i] + matrizAdj[i][k]); 
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<i<<'->';
        
        for(int j : matrizAdj[i]){
            if(j == INF){
                cout<<"INF";
            }else{
                cout<<j<<' ';
            }
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> graph = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    floydWarshall(graph);
    
    return 0;
}