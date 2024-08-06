class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, i = 0, j = 0, n = s.length();
        string aux = "";
        
        while(j < n){
            if(aux.find(s[j]) != std::string::npos){
                //cout<<aux<<' '<<endl;
                ans = max(ans, int(aux.length()));
                aux.clear();
                while(s[i] != s[j]) i++;
                i++;
                j = i+1;
                aux += s[i];
                //cout<<aux<<endl;
            }
            else{
                aux += s[j];
                j++;
            }
        }
        
        if(aux == s) return s.length();

        return max(ans, int(aux.length()));
    }
};