//https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int n, ans = 0; cin>>n;

    for(int i = 0; i < n; i++){
        string temp; cin>>temp;

        if(temp[1] == '+') ans++;
        else ans--;
    }

    cout<<ans;

    return 0;
}