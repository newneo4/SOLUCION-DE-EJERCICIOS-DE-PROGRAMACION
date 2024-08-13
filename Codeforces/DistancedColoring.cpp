//https://codeforces.com/contest/2002/problem/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        int n , m , k;
        cin>>n>>m>>k;

        cout<<min(n,k) * min(m,k)<<'\n';
    }

    return 0;
}