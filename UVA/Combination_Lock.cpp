//https://vjudge.net/problem/UVA-10550
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;

    while (cin>>a>>b>>c>>d && (a || b || c || d)) { 
        int ans = 0;
        
        ans += (b > a) ? 9 * ((40 - b) + a) : 9 * (a-b);
        ans += (c > b) ?  9 * (c-b) : 9 * ((40 - b) + c);
        ans += (d > c) ? 9 * ((40 - d) + c) : 9 * (c-d);
        
        cout<<ans + 1080<<'\n';
    }

    return 0;
}
