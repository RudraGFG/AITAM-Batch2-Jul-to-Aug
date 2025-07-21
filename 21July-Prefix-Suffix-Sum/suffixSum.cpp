#include <bits/stdc++.h>
using namespace std;

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
    
    
    for(int i=0; i<n; i++){
        cout << s[i] << " ";
    }
}
