class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> us;
        
        for(int i=0; i<nums.size(); i++){
            if(us.find(nums[i]) != us.end()){
                // element u are trying to insert is already present in the set
                return true;
            }
            
            us.insert(nums[i]);
        }
        
        
        return false;
    }
};
