#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main() {
    fastIO;

    int t, n, q;
    cin >> t;

    while (t--) {
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> prefixA(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefixB(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i) {
            if (i > 0) {
                for (int j = 0; j < 26; ++j) {
                    prefixA[i + 1][j] = prefixA[i][j];
                    prefixB[i + 1][j] = prefixB[i][j];
                }
            }
            prefixA[i + 1][a[i] - 'a']++;
            prefixB[i + 1][b[i] - 'a']++;
        }

        while (q--) {
            int l, r;
            cin >> r >> l;
            --r;

            int ans = 0;
            for (int i = 0; i < 26; ++i) {
                int countA = prefixA[l][i] - prefixA[r][i];
                int countB = prefixB[l][i] - prefixB[r][i];
                if (countB > countA) {
                    ans += countB - countA;
                }
            }
            
            cout << ans << '\n';
        }
    }

    return 0;
}
