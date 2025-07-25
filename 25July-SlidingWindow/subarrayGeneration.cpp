#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr = {10, 20, 30, 40, 50};
    
    int n = arr.size();
    
    int l = 3;
    
    // this loop is used to fix the starting point of subarray
    for(int i=0; i<n; i++){
        
        // this loop is used to fix the ending point of subarray
        for(int j=i; j<n; j++){
            
            int sum = 0;
            
            // print elements b/w S.P. and E.P.
            for(int k=i; k<=j; k++){
                sum += arr[k];
                cout << arr[k] << " ";
                
            }
            if(j-i+1 == l){
                cout << "->" << sum ;
            }
            cout << endl;
        }
    }
    
    
	return 0;
}
