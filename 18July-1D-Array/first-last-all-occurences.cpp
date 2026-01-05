class Solution {
public:
    int first(vector<int>& nums, int target)
{
    int l=0,r=nums.size()-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(nums[mid]==target){
         ans= mid;
        r=mid-1;
        }
        else if(nums[mid]<target) 
        {
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
 int last(vector<int>& nums, int target)
{
    int l=0,r=nums.size()-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        
        if(nums[mid]==target){
         ans=mid;
        l=mid+1;
        }
        else if(nums[mid]<target) l=mid+1;
        else r=mid-1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int f1=first(nums,target);
         int l1=last(nums,target);
        return {f1,l1};
        
    }
};
