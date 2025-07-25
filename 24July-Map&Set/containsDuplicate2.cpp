class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp; // key: element, value: index
        
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                // it's a Duplicate
                
                int curr = i;
                int prv = mp[nums[i]];
                
                if(abs(curr-prv) <= k){
                    return true;
                }
            }
            
            mp[nums[i]] = i;
        }
        
        return false;
    }
};
