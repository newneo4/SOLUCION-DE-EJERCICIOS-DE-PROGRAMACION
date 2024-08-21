#include <bits/stdc++.h>

using namespace std;

class GrafosMatrizAdj
{
private:
    int n;
    vector<vector<int>>matriz;
public:
    GrafosMatrizAdj(int x){
        n = x;
        matriz.resize(100, vector<int>(100,0));
    };
    
    void addEdge(int x, int y){
        if(x >= 0 && x < n && y >= 0 && y < n && x != y){
            matriz[x][y] = 1;
            matriz[y][x] = 1;
        }
    }
    
    void addVertix(){
        n++;
        
        matriz.resize(n, vector<int>(n,0));
    }

    void printMatriz(){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<matriz[i][j];
            }

            cout<<'\n';
        }
    }
};


int main(){
    GrafosMatrizAdj matrix(5);
    
    matrix.addEdge(0,1);
    matrix.addEdge(1,4);
    matrix.addEdge(2,5);
    matrix.addEdge(3,1);
    
    matrix.printMatriz();
    
    cout<<'\n';
    
    matrix.addVertix();
    matrix.printMatriz();
    
    return 0;
}