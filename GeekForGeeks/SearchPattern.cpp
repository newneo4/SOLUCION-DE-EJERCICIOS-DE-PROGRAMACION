//https://www.geeksforgeeks.org/problems/search-pattern0205/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int>ans;
            
            int n = txt.size(), m = pat.size(), i = 0, j = 0;
            
            vector<int>lps(m,0);
            
            lpsArray(lps, pat);
            
            while(i < n){
                if(txt[i] == pat[j]){
                    i++;
                    j++;
                }
                
                if(j == m){
                    ans.push_back(i - j + 1);
                    j = lps[j - 1];
                }
                
                else if(i < n && txt[i] != pat[j]){
                    if(j != 0){
                        j = lps[j-1];
                    }
                    else{
                        i++;
                    }
                }
            }
            
            if(!ans.size()){
                ans.push_back(-1); 
                return ans;
            }
                        
            return ans;
        }
        
        void lpsArray(vector<int>&lps, string pat){
            int i = 1, len = 0;
            
            lps[0] = 0;
            
            while(i < pat.size()){
                if(pat[i] == pat[len]){
                    len++;
                    lps[i] = len;
                    i++;
                }
                
                else{
                    if(len != 0){
                        len = lps[len - 1];
                    }else{
                        i++;
                    }
                }
            }
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends