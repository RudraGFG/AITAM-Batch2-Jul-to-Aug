class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // edge cases

        // if only one element is present
        if(n == 1) return nums[0];

        // manually check 0th Index
        if(nums[0] != nums[1]) return nums[0];

        // manually check N-1th Index
        if(nums[n-1] != nums[n-2]) return nums[n-1];


        int low = 1, high = n-2;

        while(low <= high){
            int mid = (low+high)/2;
            
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                // it is the single element
                return nums[mid];
            }
            
            if(mid % 2 == 0){
                // mid is even index
                if(nums[mid] == nums[mid+1]){
                    low=mid+1;
                }
                else high = mid-1;
            }
            else{
                // mid is odd index
                if(nums[mid] == nums[mid-1]){
                    low=mid+1;
                }
                else high = mid-1;
            }
        }

        return -1;
    }
};
