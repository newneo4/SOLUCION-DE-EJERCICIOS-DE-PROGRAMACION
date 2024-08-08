//https://codeforces.com/contest/1992/problem/A
#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main() {
    fastIO;

    int t;
    vector<int>numbers(3,0);

    cin >> t;

    while (t--) {
        cin>>numbers[0]>>numbers[1]>>numbers[2];

        for(int i = 0; i < 5; i++){
            sort(numbers.begin(), numbers.end());

            numbers[0]++;
        }
        
        cout<<numbers[0] * numbers[1] * numbers[2]<<'\n';
    }

    return 0;
}
