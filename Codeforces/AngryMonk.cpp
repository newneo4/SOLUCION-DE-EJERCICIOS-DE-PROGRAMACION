//https://codeforces.com/contest/1992/problem/B
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main() {
    fastIO;

    int t;
    vector<int>numbers;

    cin >> t;

    while (t--) {
        int k, n, ans = 0, max = 0;
        vector<int>pieces;

        cin>>n>>k;

        for(int i = 0; i < k; i++){
            int aux;
            cin>>aux;

            if(max < aux) max = aux;
            if(aux == 1) ans++;
            else if(aux > 1){
                ans += (aux - 1) + (aux);
            }
        }

        if(ans == n) cout<<ans-1<<'\n';
        else cout<<abs((max - 1) + max - ans)<<'\n';
    }

    return 0;
}
