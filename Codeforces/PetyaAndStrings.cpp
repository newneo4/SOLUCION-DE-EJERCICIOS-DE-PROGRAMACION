//https://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int ans = 0;
    string a, b; cin>>a>>b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if(a > b) cout<<1;
    else if(a == b) cout<<0;
    else cout<<-1;

    return 0;
}