//https://codeforces.com/contest/1999/problem/B
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    
    cin>>t;

    while(t--){
        vector<int> a(2),b(2);
        cin>>a[0]>>a[1]>>b[0]>>b[1];
        int sum1=a[0]+a[1];
        int sum2=b[0]+b[1];
    
        int ans=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int s1=0,s2=0;
                if(a[i]>b[j]){
                    s1++;
                }else if(a[i]<b[j]){
                    s2++;
                }
                if(a[1-i]>b[1-j]){
                    s1++;
                }else if(a[1-i]<b[1-j]){
                    s2++;
                }
                if(s1>s2){
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}