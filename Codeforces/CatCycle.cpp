//https://codeforces.com/gym/348180/problem/C

#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define pb push_back

using namespace std;

int main(){

    fastIO;
    
    int t;
    
    cin>>t;
    
    while(t--){
        int n, k;

        cin>>n>>k;
        k--;

        if(n % 2 == 0) cout<<1 + (k % n)<<'\n';
        else{
            ll intersections = k / ((n-1)/2);

            cout<<1 + (k+intersections)%n<<'\n';
        }
    }
    
    return 0;
}