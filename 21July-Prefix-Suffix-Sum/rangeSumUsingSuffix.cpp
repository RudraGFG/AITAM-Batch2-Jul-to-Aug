#include <bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>& s, int l, int r, int n){
    if(r == n-1) return s[l];
    else return s[l] - s[r+1];
}

int main() {
	vector<int> arr = {10, 20, 30, 40, 50};
	
	int n = arr.size();
	
	vector<int> s(n, 0);
	
    // copy last element
    s[n-1] = arr[n-1];
    
    // build suffix sum array
    for(int i=n-2; i>=0; i--){
        s[i] = s[i+1] + arr[i];
    }
    
    int ans = rangeSum(s, 0, 2, n);
    
    cout << ans;
}
