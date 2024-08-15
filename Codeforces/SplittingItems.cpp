//https://codeforces.com/contest/2004/problem/C

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int a[N];

int main() {
	
	int t; 
    
    cin >> t;
	
    while(t--) {
		int n, k; 
        
        cin >> n >> k;
        
        for(int i = 1; i <= n; i++) cin >> a[i];
        
        long long ans = 0;
        
        sort(a + 1, a + 1 + n, greater<int>());
        
        for(int i = 1; i <= n; i++) {
            if(i & 1) {
                ans += a[i]; 
            } else {
                int d = min(k, a[i - 1] - a[i]);
                a[i] += d;
                k -= d;
                ans -= a[i];
            }
        }

        cout << ans << "\n";
	}	

    return 0;
}

