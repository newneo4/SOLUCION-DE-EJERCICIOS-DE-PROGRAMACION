//https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

int main(){
    
    fastIO;
    
    int n; cin>>n;
    
    vii cubes(n);
    
    for(int i = 0; i < n; i++) cin>>cubes[i];
    
    sort(cubes.begin(), cubes.end());
    
    for(int i : cubes) cout<<i<<' ';
    
    return 0;
}