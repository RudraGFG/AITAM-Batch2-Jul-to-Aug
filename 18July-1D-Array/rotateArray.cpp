class Solution {
public:
    void rev(vector<int>& arr, int s, int e){
        while(s <= e){
            swap(arr[s], arr[e]);

            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k %= n;

        rev(nums, 0, n-1); // reversing whole array
        rev(nums, 0, k-1); // reversing the first k elements
        rev(nums, k, n-1); // reversing the rem. n-k elements
    }
};
