class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, 0);

        vector<int> pp(n, 0);
        vector<int> sp(n, 0);

        // make prefix product array
        pp[0] = nums[0];
        for(int i=1; i<n; i++){
            pp[i] = pp[i-1] * nums[i];
        }

        // make suffix product array
        sp[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            sp[i] = sp[i+1] * nums[i];
        }

        for(int i=0; i<n; i++){
            int lp, rp;

            if(i == 0){
                lp = 1;
                rp = sp[i+1];
            }
            else if(i == n-1){
                lp = pp[i-1];
                rp = 1;
            }
            else{
                lp = pp[i-1];
                rp= sp[i+1];
            }


            ans[i] = lp*rp;
        }

        return ans;
    }
};
