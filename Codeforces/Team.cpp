//https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;

    int total = 0, sum = 0, j = 1;

    for(int i = 1; i <= 3 * n; i++){
       
        int temp; cin>>temp;

        sum += temp;

         if(i == j*3){
            if(sum >= 2) total++;
            j++;
            sum = 0;
        }
    }

    cout<<total;

    return 0;
}