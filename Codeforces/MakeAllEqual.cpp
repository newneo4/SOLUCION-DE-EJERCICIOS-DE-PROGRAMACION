//https://codeforces.com/contest/2001/problem/A

#include <bits/stdc++.h>

#define ll long long
#define vii vector<int>
#define pb push_back
#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t; cin>>t;

    while(t--){
        int n, max_value = 0; cin>>n;

        vii numbers(n), reps(n+1);

        for(int i = 0; i < n; i++){
            cin>>numbers[i];

            reps[numbers[i]]++;

            max_value = max(max_value, reps[numbers[i]]);
        } 

        cout<<n-max_value;
    }

    return 0;
}