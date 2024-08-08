//https://codeforces.com/contest/1993/problem/A
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
        int a = 0, b = 0, c = 0, d = 0, n = 0;
        char inp;

        cin>>n;

        for(int i = 0; i < 4*n; i++){
            cin>>inp;

            if(inp == 'A' && a < n) a++;
            if(inp == 'B' && b < n) b++;
            if(inp == 'C' && c < n) c++;
            if(inp == 'D' && d < n) d++;
        }

        cout<<a+b+c+d<<'\n';
    }

    return 0;
}
