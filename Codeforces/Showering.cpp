//https://codeforces.com/contest/1999/problem/C
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        int n, s, m;
        cin>>n>>s>>m;
        
        int shower = 0;
        bool flag = false;
        
        for(int i = 0; i < n; i++){
            int a, b;
            cin>>a>>b;
            
            if(a - shower >= s) flag = true;
            
            shower = b;
        }
        
        if(flag) cout<<"YES"<<'\n';
        else if(m - shower >= s) cout<<"YES"<<'\n';
        
        else cout<<"NO"<<'\n';
    }

    return 0;
}