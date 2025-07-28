#include <bits/stdc++.h>
using namespace std;

int f(int n){
    // base case
    if(n == 0){
        return 1;
    }
    
    // recursive case
    
    int ansFromFrnd = f(n-1);
    
    return n * ansFromFrnd;
}

int main() {
	
	int ans = f(10);
    
    cout << ans;
}
