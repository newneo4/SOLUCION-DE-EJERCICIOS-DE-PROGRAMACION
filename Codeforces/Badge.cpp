#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

using namespace std;

int main(){
    fastIO;
    
    int n;
    cin >> n;

    vii badges(n);

    for(int i = 0; i < n; i++) cin >> badges[i];

    for(int j = 0; j < n; j++){
        int i = j;
        vector<bool> visited(n, false);
        
        while (!visited[i]) {
            visited[i] = true;
            i = badges[i] - 1;
        }
        
        cout << i + 1 << ' ';
    }
    
    return 0;
}
