//https://codeforces.com/contest/1998/problem/B

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main() {
    fastIO;

    int t;

    cin >> t;

    while (t--) {
        int n;
        vector<int>permutations;

        cin>>n;

        permutations.resize(n);

        for(int i = 0; i < n; i++) cin>>permutations[i];

        for(int i = 1; i < n; i++) cout<<permutations[i]<<' ';

        cout<<permutations[0]<<'\n';
    }

    return 0;
}
