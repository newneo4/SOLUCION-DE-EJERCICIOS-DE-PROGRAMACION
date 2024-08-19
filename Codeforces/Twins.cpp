#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(0); cin.tie(0);
#define vii vector<int>

int main(){
    
    int n, suma = 0; cin>>n;
    
    vii numbers(n);
    
    for(int i = 0; i < n; i++){
        cin>>numbers[i];
        suma += numbers[i];
    }
    
    int pos = n - 1, aux = 0;
    
    sort(numbers.begin(), numbers.end());
    
    while(pos >= 0 && suma >= aux){
        
        aux += numbers[pos];
        suma -= numbers[pos];
    
        pos--;
    }
    
    cout<<n - pos - 1;

    return 0;
}