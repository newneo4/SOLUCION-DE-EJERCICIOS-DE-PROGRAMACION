//https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

int main(){
    
    fastIO;
    
    string s; cin>>s;
    
    vii numbers;
    
    for(int i = 0; i < s.size(); i+=2) numbers.push_back(s[i] - '0');

    sort(numbers.begin(), numbers.end());
    
    int j = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(i % 2) cout<<'+';
        else{
            cout<<numbers[j];
            j++;
        }
    }

    return 0;
}