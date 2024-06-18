#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t, n;
    ll sum = 0, mx = 0, aux;
    cin>>t;

    while(t--){
        cin>>n;
        int ans = 0;

        while(n--){
            
            cin>>aux;

            sum += aux;
            mx = max(mx, aux);

            if(sum - mx == mx) ans++;
        }

        cout<<ans<<'\n';
        sum = 0;
        mx = 0;
    }

    return 0;
}
