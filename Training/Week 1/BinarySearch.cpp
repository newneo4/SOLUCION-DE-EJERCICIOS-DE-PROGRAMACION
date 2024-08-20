#include <bits/stdc++.h>

#define vii vector<int>

using namespace std;

int binarySearchLinear(vii &arr, int start, int end, int k){
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == k) return mid;

        else if(arr[mid] > k) end = mid - 1;

        else start = mid + 1;
    }

    return -1;
}

int binarySearchRecursive(vii &arr, int start, int end, int k){

    if(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == k) return mid;

        if(arr[mid] > k) return binarySearchRecursive(arr, start, mid-1, k);
        else return binarySearchRecursive(arr, mid+1, end, k);
    }

    return -1;
}

int main(){
    vii arr = {1,2,4,5,7,9,12};
    int ini = 0, end = arr.size() - 1;

    cout<<binarySearchLinear(arr,ini,end, 12);
    cout<<binarySearchRecursive(arr,ini,end,12);

    return 0;
}