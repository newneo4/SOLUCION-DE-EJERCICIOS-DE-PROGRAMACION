//https://codeforces.com/contest/1993/problem/B
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main() {
    fastIO;

    int t;

    cin >> t;

    while (t--) {
        ll n, max_odd = 0, ans = 0;
        cin>>n;

        vector<ll>numbers(n,0), even;

        for(ll i = 0; i < n; i++){
            cin>>numbers[i];

            if(numbers[i] % 2) max_odd = max(max_odd, numbers[i]);

            else even.pb(numbers[i]);
        }    

        if(even.size() == n || even.size() == 0) cout<<0<<'\n';

        else{
            sort(even.begin(), even.end());

            for(ll i = 0; i < even.size(); i++){
                if(even[i] > max_odd){
                    ans = even.size() + 1;
                    break;
                }
                else{
                    ans++;
                    max_odd += even[i];
                }
            }

            cout<<ans<<'\n';
        }
    }

    return 0;
}
