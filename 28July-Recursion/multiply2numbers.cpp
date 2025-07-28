#include <bits/stdc++.h>
using namespace std;

int mult(int x, int y){
    // base case
    if(y == 0){
        return 0;
    }
    
    
    // recursive case
    
    int aff = mult(x, y-1);
    
    return x + aff;
}

int main() {
	
    int ans = mult(5, 2);
    
    cout << ans;	
}
