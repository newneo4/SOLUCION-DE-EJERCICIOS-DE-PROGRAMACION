#include <bits/stdc++.h>

#define graph vector<vector<int>>
#define pb push_back
#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

using namespace std;

int main(){
    fastIO;

    int n; cin >> n;

    vii routers(n), ans;

    for(int i = 1; i < n; i++){
        cin>>routers[i];
    }

    int node = routers.back();

    ans.push_back(n);
    ans.push_back(node);

    while(node != 0){
        node = routers[node-1];
        ans.push_back(node);
    }
    
    for(int i = ans.size() - 2; i >= 0; i--) cout<<ans[i]<<' ';

    return 0;
}
