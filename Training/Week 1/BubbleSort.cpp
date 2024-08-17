#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

void BubbleSort(vii &array, int n){

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] > array[j]) swap(array[i], array[j]);
        }
    }
}

int main(){
    
    vii numeros = {1,10,1,2,3,16,20,0};

    BubbleSort(numeros, numeros.size());

    for(int i : numeros) cout<<i<<' ';

    return 0;
}