class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        
        int i = 0, j = arr.size()-1;
        
        while(i < j){
            int sum = arr[i]+arr[j];
            
            if(sum == target){
                return true;
            }
            else if(sum > target){
                j--; // reducing the sum so that it becomes equal to the target
            }
            else{
                i++; // inc. the sum 
            }
        }
        
        return false;
    }
};
