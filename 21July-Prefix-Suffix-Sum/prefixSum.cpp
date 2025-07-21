#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {10, 20, 30, 40, 50};
	
	int n = arr.size();
	
	vector<int> p(n, 0);
	
    // copy first element
    p[0] = arr[0];
    
    // build prefix sum array
    for(int i=0; i<n; i++){
        p[i] = p[i-1] + arr[i];
    }
    
    
    for(int i=0; i<n; i++){
        cout << p[i] << " ";
    }
}
