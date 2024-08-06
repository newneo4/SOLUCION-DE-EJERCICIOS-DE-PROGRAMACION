//https://codeforces.com/contest/1999/problem/D
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        string s,t; 
        
        cin >> s >> t;
        
        int j = 0,i = 0;
        
        while(i < t.size()){
            while(j < s.size() && s[j] != '?' && s[j] != t[i]) j++;
            if(j >= s.size()) break;
            s[j] = t[i];
            i++;
            j++;
        }
        
        if(i < t.size()) cout << "NO" << endl;
        
        else{
            cout << "YES" << endl;
            while(j < s.size()){
                if(s[j] == '?') s[j] = 'a';
                j++;
            }
            cout << s << endl;
        }
    }

    return 0;
}