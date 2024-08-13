#include <bits/stdc++.h>

#define fastIO ios::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main(){

    fastIO;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n < 102) {
            cout << "NO\n";
        } else {
            string aux = to_string(n);
            int size = aux.length();

            if (aux.substr(0, 2) == "10" && aux.substr(2, 1) != "0" && stoi(aux.substr(2,size-1)) >= 2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
