class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left = 0, right = 0, wsum = 0, cnt = 0, n = arr.size();
        
        while(right < n){
            wsum += arr[right];
            
            if(right-left+1 > k){
                // contract
                wsum -= arr[left];
                left++;
            }
            
            // check the given conditions
            if(right-left+1 == k && wsum >= threshold*k){
                cnt++;
            }
            
            
            right++;
        }
        
        return cnt;
    }
};
