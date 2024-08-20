#include <bits/stdc++.h>

using namespace std;

void sentinelLinearSearch(vector<int>&arr, int k){
    int n = arr.size();
    int sentinel = arr[n - 1];

    arr[n-1] = k;

    int i = 0;

    while(arr[i] != k) i++;

    arr[n - 1] = sentinel;

    if(i <  n-1 || arr[n-1] == k) cout<<"El elemento esta en en el indice "<<i+1;
    else cout<<"El elemento no existe";
}

int main(){
    vector<int>array = {1,4,2,6,7};

    sentinelLinearSearch(array, 10);

    return 0;
}#include <bits/stdc++.h>

using namespace std;

void sentinelLinearSearch(vector<int>&arr, int k){
    int n = arr.size();
    int sentinel = arr[n - 1];

    arr[n-1] = k;

    int i = 0;

    while(arr[i] != k) i++;

    arr[n - 1] = sentinel;

    if(i <  n-1 || arr[n-1] == k) cout<<"El elemento esta en en el indice "<<i+1;
    else cout<<"El elemento no existe";
}

int main(){
    vector<int>array = {1,4,2,6,7};

    sentinelLinearSearch(array, 10);

    return 0;
}