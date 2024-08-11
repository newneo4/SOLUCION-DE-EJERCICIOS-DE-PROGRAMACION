//https://codeforces.com/contest/1998/problem/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){

    fastIO;
    
    int t;
    
    cin>>t;
    
    while(t--){
        int k, xc, yc;

        cin>>xc>>yc>>k;

        if(k & 1){
            cout<<xc<<' '<<yc<<'\n';

            for(int i = 1; i <= k/2; i++){
                cout<<xc-i<<' '<<yc-i<<'\n';
                cout<<xc+i<<' '<<yc+i<<'\n';
            }
        }

        else{
            for(int i = 1; i <= k/2; i++){
                cout<<xc-i<<' '<<yc-i<<'\n';
                cout<<xc+i<<' '<<yc+i<<'\n';
            }
        }
    }
    
    return 0;
}