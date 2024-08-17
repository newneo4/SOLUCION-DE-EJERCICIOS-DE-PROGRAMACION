//https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&category=Sorting&sortBy=submissions
//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        int max_val = 0;
        
        for(int i = 0; i < arr.size(); i++) max_val = max(max_val, arr[i]);
        
        vector<int>aux_arr(max_val + 1, 0);
        
        for(int i = 0; i < arr.size(); i++) aux_arr[arr[i]]++;
        
        int ans = 0;
        
        for(int i = 0; i <= max_val; i++){
            if(aux_arr[i] == 1) k--;
            
            if(k == 0){
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl;
    }
    return 0;
}

// } Driver Code Ends