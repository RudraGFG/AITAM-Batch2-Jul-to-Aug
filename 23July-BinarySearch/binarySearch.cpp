#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int t){
    int low = 0;
    int high = arr.size()-1;
    
    while(low <= high){
        int mid = (low + high)/2;
        
        if(arr[mid] == t){
            return mid;
        }
        
        if(arr[mid] > t){
            // reduce the right side
            high = mid-1;
        }
        else{
            // reduce the left side
            low = mid+1;
        }
    }
    
    return -1;
}

int main() {
	vector<int> arr = {10, 20, 30, 40, 50};
	
	int target = 400;

    int ans = binarySearch(arr, target);
    
    cout << ans;
}
