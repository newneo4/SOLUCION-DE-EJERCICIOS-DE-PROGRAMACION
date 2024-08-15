//https://codeforces.com/contest/1997/problem/B

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){

    fastIO;

    int t;
    cin >> t;

    while (t--) {
        int n;
        
        cin >> n;
        
        vector<string> s(2);
        
        for (auto& x : s) cin >> x;
        
        int ans = 0;
        
        for (int i = 1; i < n - 1; ++i) {
            bool ok = true;
            ok &= (s[0][i] == '.' && s[1][i] == '.');
            ok &= (s[0][i - 1] != s[1][i - 1]);
            ok &= (s[0][i + 1] != s[1][i + 1]);
            ok &= (s[0][i - 1] == s[0][i + 1]);
            ans += ok;
        }

        cout << ans << '\n';
    }

    return 0;
}
