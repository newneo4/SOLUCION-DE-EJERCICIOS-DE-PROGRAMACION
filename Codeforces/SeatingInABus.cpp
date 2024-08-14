//https://codeforces.com/contest/2000/problem/B

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<int,bool>seats;
        bool flag = false;

        for(int i = 1; i <= n; i++){
            int aux;
            cin>>aux;

            if(i == 1) seats[aux] = true;
            else if(seats[aux-1] == true || seats[aux+1] == true) seats[aux] = true;
            else if(seats[aux-1] != true || seats[aux+1] != true) flag = true;
        }

        if(flag) cout<<"NO\n";
        else cout<<"YES\n";

    }

    return 0;
}