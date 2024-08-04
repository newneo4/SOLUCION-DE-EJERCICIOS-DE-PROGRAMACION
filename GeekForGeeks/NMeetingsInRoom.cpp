//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        int ans = 0, i = 0, j = 0, last_meet = end[0] - 1;
        
        sort(start, start + n);
        sort(end, end + n);
        
        // while(i < n || j < n){
        //     while(i < n && start[i] <= last_meet){
        //         i++;
        //     }
            
        //     while(j + 1 < n && start[i] >= end[j]){
        //         j++;
        //     }
            
        //     if(j < n && i < n && start[i] < end[j]){
        //         ans++;
        //         i++;
        //         j++;
        //         last_meet = end[j];
        //     }
            
        //     cout<<i<<' '<<j<<endl;
        // }

        for (size_t i = 0; i < n; i++)
        {
            cout<<start[i]<<' '<<end[i]<<'\n';
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends