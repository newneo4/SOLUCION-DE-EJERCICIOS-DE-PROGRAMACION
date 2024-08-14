//https://codeforces.com/contest/1997/problem/A

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){

    fastIO;

    int t;
    cin >> t;

    while (t--) {
        string s;

        cin>>s;

        int size = s.length() - 1;
        bool flag = true;

        for (int i = 0; i < s.length(); i++)
        {
            if(i + 1 < s.length() && s[i] == s[i+1] && flag) {
                cout<<s.substr(0,i+1) + ((s[i] == 'a') ? 'b' : 'a') + s.substr(i+1, size)<<'\n';
                flag = false;
                break;
            }
        }

        if(flag) cout<<s + ((s.back() == 'a') ? 'b' : 'a')<<'\n';
    }
    return 0;
}
