class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // edge case
        // if only one element is present in the array
        if(n == 1) return 0;

        // manually check 0th index
        if(nums[0] > nums[1]) return 0;

        // manually check N-1th index
        if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1, high = n-2;
        
        while(low <= high){
            int mid = (low+high)/2;
            
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                // it is the peak element
                return mid;
            }
            
            if(nums[mid] > nums[mid-1]){
                // move towards the right
                low = mid+1;
            }
            else{
                // move towards the left
                high=mid-1;
            }
        }

        return -1;
    }
};
