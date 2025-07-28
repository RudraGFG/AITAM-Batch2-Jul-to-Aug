#include <bits/stdc++.h>
using namespace std;


int f(vector<int>& nums, int i){
    // base case
    if(i == nums.size()){
        return 0;
    }
    
    // recursive case
    
    int aff = f(nums, i+1);
    
    return nums[i] + aff;
}

int main() {
	
    vector<int> nums = {-10, 10, 20, 30};
    
    int ans = f(nums, 0);
    
    cout << ans;
}
