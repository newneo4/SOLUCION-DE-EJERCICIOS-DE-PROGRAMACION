//https://www.geeksforgeeks.org/problems/search-pattern-rabin-karp-algorithm--141631/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int>ans;
            
            int m = pattern.size(), n = text.size();
            
            int d = 256, q = INT_MAX, p = 0, t = 0, h = 1;
            
            for(int i = 0; i < m-1; i++) h = (h * d) % q;
            
            for(int i = 0; i < m; i++){
                p = (d * p + pattern[i]) % q;
                t = (d * t + text[i]) % q;
            }
            
            for(int i = 0; i <= n - m; i++){
                if(p == t){
                    int j;
                    
                    for(j = 0; j < m; j++){
                        if(text[i + j] != pattern[j]) break;
                    }
                    
                    if(j == m){
                        ans.push_back(i+1);
                    }
                }
                
                if(i < n - m){
                    t = (d * (t - text[i] * h) + text[i+m])%q;
                    
                    if(t < 0) t += q;
                }
            }
            
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends