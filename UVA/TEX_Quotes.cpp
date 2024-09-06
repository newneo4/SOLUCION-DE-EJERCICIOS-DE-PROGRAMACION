
//https://vjudge.net/problem/UVA-272
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin.unsetf(ios::skipws); //para evitar el comportamiento del cin de ignorar espacios y saltos de linea
 
    char c;
    bool flag = true;
    
    while(cin>>c && c != EOF){
        if(c == '"'){
            if(flag){
                cout<<"``";
            }else{
                cout<<"''";
            }
            flag = !flag;
        }else{
            cout<<c;
        }
    }

   /*  char c;
    bool flag = true;

    while (cin.get(c) && c != EOF) { 
        if(c == '"'){
            if(flag) cout<<"``";
            else cout<<"''";
            flag = !flag;
        }
        else{
            cout<<c;
        }
    } */

    return 0;
}