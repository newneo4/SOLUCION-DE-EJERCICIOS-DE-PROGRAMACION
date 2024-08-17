#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

void insertionSort(vii &array, int n){

    for(int i = 1; i < n; i++){
        int j = i - 1;
        int value = array[i];

        while(j >= 0 && array[j] > value){
            array[j+1] = array[j];
            j--;
        } 

        array[j+1] = value;
    }
}

int main(){
    
    vii numeros = {1,10,1,2,3,16,20,0};

    insertionSort(numeros, numeros.size());

    for(int i : numeros) cout<<i<<' ';

    return 0;
}