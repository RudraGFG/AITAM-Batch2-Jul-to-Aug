class Solution {
public:
    void f(vector<int>& arr, int i, vector<int>& temp, vector<vector<int>>& ans){
    // base case
    if(i == arr.size()){
        ans.push_back(temp);
        
        return;
    }
    
    
    // recursive case
    
    // include
    temp.push_back(arr[i]);
    f(arr, i+1, temp, ans);
    temp.pop_back(); // backtracking step
    
    // exclude
    f(arr, i+1, temp, ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        f(nums, 0, temp, ans);
        
        return ans;
    }
};
