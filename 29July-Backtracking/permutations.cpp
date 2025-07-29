class Solution {
public:
    void f(vector<int>& arr, int i, vector<vector<int>>& ans){
    // base case
    if(i == arr.size()){
        ans.push_back(arr);
        
        return;
    }
    
    // recursive case
    
    for(int j=i; j<arr.size(); j++){
        swap(arr[i], arr[j]);
        f(arr, i+1, ans);
        swap(arr[i], arr[j]); // backtracking
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        f(nums, 0, ans);

        return ans;
    }
};
