//https://vjudge.net/problem/UVA-11044

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>

int main(){
    int t;
    
    cin>>t;
    
    while(t--){
        int x, y; cin>>x>>y;
        
        cout<<((x - (x % 3)) * (y - (y % 3))) / 9<<'\n';
    }
    
    
    return 0;
}