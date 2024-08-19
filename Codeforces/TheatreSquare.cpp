//https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll unsigned long long

using namespace std;

int main(){
    
    fastIO;

    ll n,m,a,total = 0 ; cin>>n>>m>>a;

    if(n % a) total= n/a + 1;
    else total += n/a;
    
    if(m%a) total *= m/a + 1;
    else total *= m/a;
    
    cout<<total;
    
    return 0;
}