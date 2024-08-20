//https://codeforces.com/problemset/problem/1996/A

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>
#define pb push_back
#define ll long long

int main(){
    
    fastIO;
    
    int t; cin>>t;
    
    while(t--){
        
        int n; cin>>n;
        
        cout<<(n/4) + (n%4 != 0)<<'\n';
    }
    
    return 0;
}