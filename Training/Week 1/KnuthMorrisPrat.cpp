#include <bits/stdc++.h>

using namespace std;

void funcionFracaso(const string &pattern, int m, vector<int> &tablaF) {
    int i = 1;
    int len = 0;

    while (i < m) {
        if (pattern[len] == pattern[i]) {
            len++;
            tablaF[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = tablaF[len - 1];
            } else {
                tablaF[i] = 0;
                i++;
            }
        }
    }
}

vector<int> AlgoritmoKMP(const string &text, const string &pattern, const vector<int> &tablaF) {
    vector<int> ans;

    int n = text.size();
    int m = pattern.size();

    int k = 0, i = 0;

    while (k < n) {
        if (pattern[i] == text[k]) {
            i++;
            k++;
        }

        if (i == m) {
            ans.push_back(k - i);  // Corregido: guardar la posición correcta
            i = tablaF[i - 1];
        } else if (k < n && pattern[i] != text[k]) {
            if (i != 0) {
                i = tablaF[i - 1];
            } else {
                k++;
            }
        }
    }

    return ans;
}

int main() {
    string text, pattern;

    cin >> text >> pattern;

    int m = pattern.size();
    vector<int> tablaF(m, 0), ans;

    funcionFracaso(pattern, m, tablaF);

    ans = AlgoritmoKMP(text, pattern, tablaF);

    for (int i : ans) cout << i << ' ';

    return 0;
}
