class Solution {
public:
    int cntDigits(int num){
        int cnt = 0;

        while(num != 0){
            num /= 10;
            cnt++;
        }

        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size(), ans = 0;

        for(int i=0; i<n; i++){
            int a = cntDigits(nums[i]);

            if(a%2 == 0){
                ans++;
            }
        }

        return ans;
    }
};
