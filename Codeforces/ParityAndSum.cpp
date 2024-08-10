//https://codeforces.com/contest/1993/problem/A
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
        int n, max_odd = 0, ans = 0;
        cin>>n;

        vector<int>numbers(n,0), even;

        for(int i = 0; i < n; i++){
            cin>>numbers[i];

            if(numbers[i] % 2) max_odd = max(max_odd, numbers[0]);

            else even.pb(numbers[i]);
        }    

        if(even.size() == n || even.size() == 0) cout<<0<<'\n';

        else{
            sort(even.begin(), even.end());

            for(int i = even.size() - 1; i >= 0; i--){
                while(i >= 0 && even[i] > max_odd){
                    max_odd += even[i];
                    ans+= 2;
                }
                else ans++;
            }

            cout<<ans<<'\n';
        }
    }

    return 0;
}
