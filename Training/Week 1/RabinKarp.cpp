#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

void search(string &text, string &pattern){
    int d = 256, h = 1, n = text.size(), m = pattern.size(), p = 0, t = 0;
    int q = INT_MAX;

    for(int i = 0; i < m-1; i++) h = (h * d) % q;

    for(int i = 0; i < m; i++){
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    for(int i = 0; i <= n - m; i++){
        if(p == t){
            int j;

            for(j = 0; j < m; j++){
                if(text[i+j] != pattern[j]) break;
            }

            if(j == m){
                cout<<"Patron encontrado en"<<i<<endl;
            }
        }

        if(i < n - m){
            t = (d * (t - text[i] * h) + text[i+m]) % q;

            if(t < 0) t += q;
        }
    }
}

int main(){
    string text, patttern;

    cin>>text>>patttern;

    search(text, patttern);

    return 0;
}