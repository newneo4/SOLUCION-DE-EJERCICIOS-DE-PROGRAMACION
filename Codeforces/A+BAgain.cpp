//https://codeforces.com/contest/1999/problem/A
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        cout<<(n/10) + (n%10)<<'\n';
    }

    return 0;
}