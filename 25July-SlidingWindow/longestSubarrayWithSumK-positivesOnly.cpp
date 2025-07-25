#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {10, 7, 1, 7, 1, 5, 5};
	int k = 18;
	
	int left = 0, right = 0, wsum = 0, n = arr.size(), maxLen = 0;
	
	
	while(right < n){
	    wsum += arr[right];
	    
	    // contract
	    while(wsum > k){
	        wsum -= arr[left];
	        left++;
	    }
	    
	    if(wsum == k){
	        // track the maximum length
	        maxLen = max(maxLen, right-left+1);
	    }
	    
	    right++;
	}
	
	cout << maxLen;
}
