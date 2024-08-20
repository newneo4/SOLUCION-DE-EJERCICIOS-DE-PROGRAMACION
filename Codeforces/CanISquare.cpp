//https://codeforces.com/problemset/problem/1915/C

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>
#define pb push_back
#define ll long long

bool isSquare(ll x){
    ll ini = 1, end = 1e9;

    while(ini <= end){
        ll mid = ini + (end - ini)/2;

        if(mid * mid == x) return true;

        else if(mid * mid < x) ini = mid + 1;
        else end = mid - 1;
    }

    return false;
}

int main(){
    
    fastIO;
    
    int t; cin>>t;
    
    while(t--){
        
        int n; cin>>n;
        ll sum = 0;
        
        vector<ll> buckets(n);
        
        for(int i = 0; i < n; i++){
            cin>>buckets[i];
            
            sum += buckets[i];
        }
        
        // if(ceil(sqrt(sum)) * ceil(sqrt(sum)) == sum) cout<<"YES\n";
        // else cout<<"NO\n";
        if(isSquare(sum)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}