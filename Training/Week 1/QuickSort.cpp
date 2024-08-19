#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>&arr, int ini, int fin){
    int pivote = arr[fin];

    int i = ini - 1;

    for(int j = ini; j < fin; j++){
        if(arr[j] < pivote){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[fin]);
    
    return i+1;
}

void QuickSort(vector<int>&arr, int ini, int fin){
    if(ini < fin){
        int mitad = partition(arr, ini, fin);

        QuickSort(arr, ini, mitad - 1);
        QuickSort(arr, mitad + 1, fin);
    }
}

int main(){
    vector<int>arr = {1,4,761,2,6,2};

    QuickSort(arr, 0, arr.size()-1);

    for(int i : arr) cout<<i<<' ';

    return 0;
}