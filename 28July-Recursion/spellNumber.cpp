#include <bits/stdc++.h>
using namespace std;

vector<string> digitMp = {"zero", "one", "two", "three",
    "four", "five", "six", "seven", "eight", "nine"
};


void f(int n){
    // base case
    if(n == 0){
        return;
    }
    
    // recursive case
    
    f(n/10);
    
    int idx = n % 10;
    
    cout << digitMp[idx] << endl;
}

int main() {
	
    f(99701);	
}
