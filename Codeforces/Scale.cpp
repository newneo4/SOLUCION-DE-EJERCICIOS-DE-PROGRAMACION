//https://codeforces.com/contest/1996/problem/B
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t = 0, n = 0, k = 0;

    cin>>t;
    
    while(t--){
        cin>>n>>k;
        
        vector<string> matrix(n);

        for(int i = 0; i < n; i++){
            cin>>matrix[i];
        }
        
        for(int i = 0; i < n; i+=k){
            for(int j = 0; j < n; j+= k){
               cout<<matrix[i][j]; 
            }
            cout<<'\n';
        }
    }
    
    return 0;
}