#include <bits/stdc++.h>
using namespace std;

void f(int n){
    // base case
    if(n == 0){
        return;
    }
    
    // recursive case
    
    f(n-1);
    
    cout << n << endl;
}

int main() {
	
    f(10);	
}
