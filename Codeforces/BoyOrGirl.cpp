//https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int ans = 0;
    vector<int>alphabet(26,0);

    string user; cin>>user;

    for(int i  = 0; i < user.size(); i++){
        int ind = user[i] - 'a';
        if(alphabet[ind] == 0){
            alphabet[ind]++;
            ans++;
        }
    }

    string res = (ans % 2) ? "IGNORE HIM!" : "CHAT WITH HER!";
    
    cout<<res;

    return 0;
}