//https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int n, k, p = 0; cin>>n>>k;

    vector<int>scores(n,0);

    for(int i  = 0; i < n; i++){
        cin>>scores[i];

        if(i == k-1) p = scores[i];
    }

    int i = 0;

    while(scores[i] != 0 && scores[i] >= p) i++;

    cout<<i;

    return 0;
}