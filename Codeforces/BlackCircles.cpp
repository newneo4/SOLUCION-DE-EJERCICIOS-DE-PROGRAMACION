//https://codeforces.com/contest/2002/problem/C

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

using namespace std;

int main(){

    fastIO;

    int t;
    ll xs, ys, xt, yt;
    
    cin>>t;

    while(t--){
        int n;

        cin>>n;
        vector<ll>x(n,0), y(n,0);

        for(int i = 0; i < n; i++) cin>>x[i]>>y[i];

        cin>>xs>>ys>>xt>>yt;

        ll distance = (xs-xt)*(xs-xt) + (ys-yt) * (ys-yt);
        bool flag = false;

        for(int i = 0; i < n; i++){
            ll aux = (x[i]-xt)*(x[i]-xt) + (y[i]-yt) * (y[i]-yt);

            if(aux <= distance) flag = true;
        }

        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}