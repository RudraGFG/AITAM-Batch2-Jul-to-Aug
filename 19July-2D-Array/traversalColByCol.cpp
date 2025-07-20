#include <bits/stdc++.h>
using namespace std;

int main() {
	
    vector<vector<int>> mat = {{10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    
    int rows = mat.size();
    
    int cols = mat[0].size();
    
    for(int j=0; j<cols; j++){
        for(int i=0; i<rows; i++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
