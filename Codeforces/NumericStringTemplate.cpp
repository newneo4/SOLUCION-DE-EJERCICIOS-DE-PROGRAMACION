//https://codeforces.com/problemset/problem/2000/C

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back
#define vii vector<int>

using namespace std;

string encodeWords(string &text, map<ll,char>&codes, vector<ll> &numbers){
    
    set<char>letter;
    set<ll>size_numbers;
    
    if(text.size() != numbers.size()) return "NO";

    int n = numbers.size(), s = text.size();
    
    for(int i = 0; i < n; i++){
        letter.insert(text[i]);
        size_numbers.insert(numbers[i]);
    }
    
    if(letter.size() != size_numbers.size()) return "NO";

    for(int i = 0; i  < n; i++) codes[numbers[i]] = text[i];

    string comp;

    for(int i = 0; i < n; i++) comp += codes[numbers[i]];
    
    return (comp == text) ? "YES" : "NO";
}

int main(){

    fastIO;

    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        vector<ll> numbers(n,0);

        for(int i = 0; i < n; i++) cin>>numbers[i];

        int m; cin>>m;

        vector<string>words;
        map<ll,char>codes;

        for(int i = 0; i < m ; i++){
            string aux; cin>>aux;

            cout<<encodeWords(aux, codes, numbers)<<'\n';
        }
    }

    return 0;
}