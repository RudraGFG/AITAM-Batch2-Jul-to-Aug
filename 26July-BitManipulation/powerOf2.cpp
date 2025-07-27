#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 1;
	
	int cnt = 0;
	
	for(int k=0; k<32; k++){
	    // check Kth bit
	    int mask = 1 << k;
	    
	    if((n&mask) != 0){
	        cnt++;
	    }
	}
	
    if(cnt == 1){
        cout << "Number is a power of 2";
    }
    else cout << "Not a power of 2";

  return 0;
}
