//https://vjudge.net/problem/UVA-11498

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fastIO ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

int main(){
    fastIO

    int q;

    while(cin>>q && q){
        int x, y; cin>>x>>y;
        
        for(int i = 0; i < q; i++){
            int a, b; cin>>a>>b;
            
            if(a == x || b == y) cout<<"divisa\n";
            else if(a < x && b > y) cout<<"NO\n";
            else if(a < x && b < y) cout<<"SO\n";
            else if(a > x && b > y) cout<<"NE\n";
            else if(a > x && b < y) cout<<"SE\n";
        }
    }

    return 0;
}