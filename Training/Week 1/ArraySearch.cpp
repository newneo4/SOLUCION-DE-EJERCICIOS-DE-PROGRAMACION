//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {
        int n = arr.size() - 1;
        
        int last = arr[n];
        
        arr[n] = x;
        
        int i = 0;
        
        while(arr[i] != x) i++;
        
        arr[n] = last;
        
        if(i <= n - 1 || x == last) return i;
        
        else return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int testcases;
    cin >> testcases;
    cin.ignore(); // To ignore the newline character after reading testcases
    while (testcases--) {
        vector<int> arr;
        int x;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, input); // Read the next line for x
        stringstream ss2(input);
        ss2 >> x;

        Solution ob;
        cout << ob.search(arr, x) << endl; // Linear search
    }

    return 0;
}
// } Driver Code Ends