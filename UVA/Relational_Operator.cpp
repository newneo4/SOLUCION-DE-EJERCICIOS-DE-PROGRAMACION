//https://vjudge.net/problem/UVA-11172

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define fastIO ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

int main(){
    fastIO

    int t; cin>>t;

    while(t--){
        int a, b; cin>>a>>b;

        char ans = (a == b) ? '=' : ((a > b) ? '>' : '<');
        
        cout<<ans<<'\n';
    }

    return 0;
}