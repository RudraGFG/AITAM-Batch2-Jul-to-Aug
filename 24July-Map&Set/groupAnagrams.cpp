class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        // make the map
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            
            sort(temp.begin(), temp.end());
            
            mp[temp].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        // just pick the array from map and put it in ans vector
        for(auto p : mp){
            ans.push_back(p.second);
        }
        
        return ans;
    }
};
