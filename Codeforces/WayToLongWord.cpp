//https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        string word; cin>>word;

        string ans = word.size() > 10 ? word[0] + to_string(word.size() - 2) + word[word.size() - 1] : word;

        cout<<ans<<'\n';
    }


    return 0;
}