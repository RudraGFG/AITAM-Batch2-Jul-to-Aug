class Solution {
public:
    int findFirstPos(vector<int>& arr, int t){
    int low = 0;
    int high = arr.size()-1;
    
    int ans = -1;
    
    while(low <= high){
        int mid = (low+high)/2;
        
        if(arr[mid] == t){
            ans = mid;
            high = mid-1;
            
            // mid can be the answer
            // but i will take risk of going to the left side
        }
        else if(arr[mid] > t){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    
    return ans;
}

int findLastPos(vector<int>& arr, int t){
    int low = 0;
    int high = arr.size()-1;
    
    int ans = -1;
    
    while(low <= high){
        int mid = (low+high)/2;
        
        if(arr[mid] == t){
            ans = mid;
            low = mid+1;
            
            // mid can be the answer
            // but i will take risk of going to the right side
        }
        else if(arr[mid] > t){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int fp = findFirstPos(nums, target);
        int lp = findLastPos(nums, target);

        return {fp, lp};
    }
};
