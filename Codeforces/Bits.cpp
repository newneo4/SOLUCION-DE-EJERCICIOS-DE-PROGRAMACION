//https://codeforces.com/contest/2004/problem/B

#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n, ans = 0;

    cin>>n;

    while(n--){
        string aux;
        cin>>aux;

        if(aux[1] == '+') ans++;
        else if(aux[1] == '-') ans--;
    }

    cout<<ans;

	return 0;
}
