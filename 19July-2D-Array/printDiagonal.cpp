#include <bits/stdc++.h>
using namespace std;

int main() {
	
    vector<vector<int>> mat = {{10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int n = mat.size();
    
    // using 2 Loops
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                cout << mat[i][j] << " ";
            }
        }
    }
    
    cout << endl;
    
    // using 1 Loop
    for(int i=0; i<n; i++){
        cout << mat[i][i] << " ";
    }
    
    return 0;
}
