//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&category=Sorting&sortBy=submissions
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int l = 0, r = n-1, mid = 0;
        
        while(mid <= r){
            if(a[mid] == 0){
                swap(a[mid],a[l]);
                mid++;
                l++;
            }
            
            else if(a[mid] == 1) mid++;
            
            else if(a[mid] == 2) {
                swap(a[r], a[mid]);
                r--;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends