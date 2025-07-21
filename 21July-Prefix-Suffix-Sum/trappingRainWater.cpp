class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> pm(n, 0);
        vector<int> sm(n, 0);

        // fill prefix max array
        pm[0] = height[0];
        for(int i=1; i<n; i++){
            pm[i] = max(pm[i-1], height[i]);
        }

        // fill suffix max array
        sm[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            sm[i] = max(sm[i+1], height[i]);
        }

        int sum = 0;
        
        // find trapped water for each building
        for(int i=0; i<n; i++){
            int trappedWater = min(pm[i], sm[i]) - height[i];
            
            if(trappedWater < 0) trappedWater = 0;
            
            sum += trappedWater;
        }
        
        return sum;
    }
};
