//https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
	
    int n, k, ans = 0, l = 0;

    cin>>n>>k;

    vector<int>scores(n,0);

    for(int i = 0; i < n; i++) cin>>scores[i];

    if(scores[0] == 0) cout<<0;
    else{
        while( k < n && scores[k-1] == scores[k]) k++;
        while( k >= 0 && scores[k-1] == 0) k--;

        cout<<k<<'\n';
    }

	return 0;
}
