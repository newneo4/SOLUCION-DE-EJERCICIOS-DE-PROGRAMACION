//https://codeforces.com/contest/1996/problem/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0, n = 0;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        int ans = !(n % 4) ? n/4 : ((n/4) + ((n%4) / 2));
        cout<<ans<<'\n';
        
    }
    
    return 0;
}