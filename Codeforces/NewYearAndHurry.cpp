//https://codeforces.com/contest/750/problem/A

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>
#define pb push_back

int main(){
    
    fastIO;
    
    int max = 240, n, k;  cin>>n>>k;
    
    int i = 0, aux = 0;
    
    while((max - k) >= aux){
        if(i <= n){
            i++;
            aux += 5 * i;
        }
        else break;
    }
    
    cout<<i-1;
    
    return 0;
}