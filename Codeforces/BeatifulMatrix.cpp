//https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int ans;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int temp = 0; cin>>temp;
            if(temp == 1) ans = abs(2 - i) + abs(2 - j);
        }
    }

    cout<<ans;

    return 0;
}