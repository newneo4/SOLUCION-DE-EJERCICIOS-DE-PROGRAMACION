#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>&arr, int ini, int mitad, int fin){
    int sizeIzq = mitad - ini + 1;
    int sizeDer = fin - mitad;

    vector<int>arrIzq(sizeIzq), arrDer(sizeDer);

    for(int i = 0; i < sizeIzq; i++) arrIzq[i] = arr[ini + i];
    for(int j = 0; j < sizeDer; j++) arrDer[j] = arr[mitad + j + 1];

    int i = 0, j = 0, k = ini;

    while(i < sizeIzq && j < sizeDer){
        if(arrIzq[i] <= arrDer[j]){
            arr[k] = arrIzq[i];
            i++;
        }
        else{
            arr[k] = arrDer[j];
            j++;
        }

        k++;
    }

    while(i < sizeIzq){
        arr[k] = arrIzq[i];
        i++;
        k++;
    }

    while(j < sizeDer){
        arr[k] = arrDer[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>&arr, int ini, int fin){
    if(ini < fin){
        int mitad = ini + (fin - ini) / 2;

        mergeSort(arr, ini, mitad);
        mergeSort(arr, mitad+1, fin);

        merge(arr, ini, mitad, fin);
    }
}

int main(){
    vector<int>arr = {1,4,761,2,6,2};

    mergeSort(arr, 0, arr.size()-1);

    for(int i : arr) cout<<i<<' ';

    return 0;
}