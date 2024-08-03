//https://vjudge.net/problem/UVA-725

#include <bits/stdc++.h>

using namespace std;

unordered_map<char,int>digits;

bool verificar(int a, int b){
    string digits_use= to_string(a) + to_string(b);

    digits['0']= 0;
    digits['1']= 0;
    digits['2']= 0;
    digits['3']= 0;
    digits['4']= 0;
    digits['5']= 0;
    digits['6']= 0;
    digits['7']= 0;
    digits['8']= 0;
    digits['9']= 0;

    if(digits_use.length() == 9) digits['0']++;

    for(auto i : digits_use){
        digits[i]++;

        if(digits[i] > 1) return false;
    }

    return true;
}

// char digitos[10] = {'0','1','2','3','4','5','6','7','8','9'};

// bool verificar(int a, int b){
//     char digitos_usados[11];

//     int total = 0;
//     sprintf(digitos_usados, "%05d%05d",a,b);

//     for (size_t i = 0; i < 10; i++)
//     {
//         int total = 0;
//         for(int j = 0; j < 10; j++){
//             if(digitos[i] == digitos_usados[j]) total++;
//         }

//         if(total > 1) return false;
//     }

//     return true;
// }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, divides;
    bool sol = false, first_case = true;

    while(cin >> n && n){
        if(!first_case) cout<<'\n';

        sol = false;

        for (int i = 1234; i < 98765 ; i++)
        {
            divides = n * i;
            if(divides > 98765) break;

            if(verificar(divides, i)){
                sol = true;
                cout<<setfill('0')<<setw(5)<<divides;
                cout<<" / ";
                cout<<setfill('0')<<setw(5)<<i<<'\n';
            }
        }

        if(!sol){
            cout<<"There are no solutions for "<<n<<"."<<'\n';
        }       

        first_case = false; 
    }

    return 0;
}