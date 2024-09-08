//https://vjudge.net/problem/UVA-11364

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define fastIO ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);

int main(){
    fastIO

    int t; cin>>t;

    while(t--){
        int n, minimo = INT_MAX, maximo = INT_MIN; cin>>n;

        for(int i = 0; i < n; i++){
            int aux; cin>>aux;
            
            minimo = min(aux, minimo);
            maximo = max(aux, maximo);
        }
        
        cout<<(maximo - minimo) * 2<<'\n';
    }

    return 0;
}