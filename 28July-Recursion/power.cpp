#include <bits/stdc++.h>
using namespace std;

int p(int x, int y){
    // base case
    if(y == 0){
        return 1;
    }
    
    
    // recursive case
    
    int aff = p(x, y-1);
    
    return x * aff;
}

int main() {
	
    int ans = p(5, 0);
    
    cout << ans;	
}
