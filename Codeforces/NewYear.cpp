//https://codeforces.com/gym/348180/problem/D

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

    int n;
    cin>>n;

    vector<ll>divs = divisors(n), ans;

    for(ll x : divs){
        ll len = n/x;

        ans.pb(x * (len * (len-1)/2) + len);
    }

    sort(ans.begin(), ans.end());

    for(ll x : ans) cout<<x<<' ';

    return 0;
}