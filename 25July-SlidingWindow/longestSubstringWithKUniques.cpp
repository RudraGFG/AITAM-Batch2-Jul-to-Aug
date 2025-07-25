class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int l = 0, r = 0, n = s.size(), distinctCnt = 0, maxLen = 0;
        
        vector<int> freq(26, 0);
        
        while(r < n){
            
            // check if it is coming for the first time
            if(freq[s[r] - 'a'] == 0){
                distinctCnt++;
            }
            
            freq[s[r] - 'a']++;
            
            // contraction logic
            while(distinctCnt > k){
                freq[s[l] - 'a']--;
                
                if(freq[s[l] - 'a'] == 0){
                    distinctCnt--;
                }
                
                l++;
            }
            
            // track maximum length
            if(distinctCnt == k){
                maxLen = max(maxLen, r-l+1);
            }
            
            r++;
        }
        
        if(maxLen == 0) return -1;
        else return maxLen;
        
    }
};
