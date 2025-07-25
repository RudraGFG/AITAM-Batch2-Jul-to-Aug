class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int left = 0, right = 0, wsum = 0, maxSum = INT_MIN, n = arr.size();
        
        while(right < n){
            wsum += arr[right];
            
            if(right-left+1 > k){
                // contract
                wsum -= arr[left];
                left++;
            }
            
            if(right-left+1 == k){
                // track the maximum
                maxSum = max(maxSum, wsum);
            }
            
            
            right++;
        }
        
        
        return maxSum;
    }
};
