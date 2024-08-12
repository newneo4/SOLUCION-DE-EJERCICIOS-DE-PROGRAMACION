//https://codeforces.com/contest/2002/problem/B

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        int n;

        cin>>n;

        vector<int>a(n,0), b(n,0);

        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];

        int l = 0, r = n-1, i = 0, j  = n-1;
        bool flag = false;

        while(i < j){
            if((a[i] != b[l] && a[i] != b[r]) || (a[j] != b[l] && a[j] != b[r])){
                flag = true;
                break;
            }
            else if(a[j] == b[r] || a[i] == b[r]){
                if(a[j] == b[r]) j--;
                else if(a[i] == b[r]) i++;
                r--;
            }
            else if(a[j] == b[l] || a[i] == b[l]){
                if(a[j] == b[l]) j--;
                else if(a[i] == b[l]) i++;
                l++;
            }
        }

        if(flag) cout<<"Alice\n";
        else cout<<"Bob\n";
    }

    return 0;
}