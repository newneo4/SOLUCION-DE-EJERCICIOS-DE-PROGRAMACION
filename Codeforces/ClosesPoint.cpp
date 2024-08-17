//https://codeforces.com/contest/2004/problem/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

vector<ll> divisors(ll n) {
    vector<ll> divs;
    ll i = 1;

    for(; i * i <= n; i++) {
        if(n % i == 0) {
            divs.push_back(i); 
            if(i != n / i) { 
                divs.push_back(n / i); 
            }
        }
    }

    return divs;
}

int main(){

    fastIO;

    int t;

    cin>>t;

    while(t--){
        int n;
        bool flag = true;

        cin>>n;

        vector<int>points(n,0);

        for(int i = 0; i < n; i++){
            cin>>points[i];

            flag &= (n == 2 && i-1 > 0 && (points[i]+1 == points[i] || points[i] - 1 == points[i]));
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}