#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

void SelectionSort(vii &array, int n){

    for(int i = 0; i < n; i++){
        int pos = i;
        for(int j = i +1; j < n; j++){
            if(array[i] < array[j]) pos = j;
        }

        if(pos != i) swap(array[i], array[pos]);
    }
}

int main(){
    
    vii numeros = {1,0,2,3};

    SelectionSort(numeros, numeros.size());

    for(int i : numeros) cout<<i<<' ';

    return 0;
}