//https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

int main(){
    
    fastIO;
    
    map<char,int>letters;
    
    string host, name, pile; cin>>host>>name>>pile;
    
    for(auto i : host) letters[i]++;
    for(auto i : name) letters[i]++;
    for(auto i : pile) letters[i]--;
    
    bool flag = false;
    for(auto i : letters){
        if(i.second != 0){
            flag = true;
            break;
        }
    }
    
    if(flag) cout<<"NO";
    else cout<<"YES";

    return 0;
}