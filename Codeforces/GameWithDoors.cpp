//https://codeforces.com/contest/2004/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t; 
    
    cin >> t;

	while(t--) {
		int l, r; 
        
        cin >> l >> r;
        
        int a, b; 
        
        cin >> a >> b;
        
        vector<int> d(105, 0);
        
        int v = min(r, b) - max(l, a);
        
        if(l < a) d[a - 1] = true;
        if(a < l) d[l - 1] = true;
        if(b > r) d[r] = true;
        if(r > b) d[b] = true;

        int ans = 0;
        for(int i = 1; i <= 101; i++) {
            ans += d[i];
        }

        if(v < 0) ans = 0;
        
        cout << max(1, ans + max(0, min(r, b) - max(l, a))) << '\n';
	}	
	
	return 0;
}
