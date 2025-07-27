#include<bits/stdc++.h>
using namespace std;

int main() {

  int n = 10;
	int cnt = 0;

	for(int k=0; k<32; k++){
	    // check Kth bit
	    int mask = 1 << k;
	    
	    if((n&mask) != 0){
	        cnt++;
	    }
	}

	cout << cnt << endl;

	return 0;
}
