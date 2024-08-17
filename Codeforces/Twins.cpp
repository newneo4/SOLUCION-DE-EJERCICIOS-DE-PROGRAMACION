//https://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

int main(){
    
    int n; cin>>n;

    vii coins(n,0);
    int suma = 0;

    for(int i = 0; i < n; i++){
        cin>>coins[i];

        suma+= coins[i];
    }

    int aux = 0, pos = coins.size() - 1;
    
    sort(coins.begin(), coins.end());

    while(pos >= 0 && aux < suma){
        cout<<suma<< ' '<<aux<<endl;
        aux += coins[pos];
        suma -= coins[pos];
        pos--;
    }

    cout<<int(coins.size()) - pos - 1;

    return 0;
}