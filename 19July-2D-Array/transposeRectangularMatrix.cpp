#include <bits/stdc++.h>
using namespace std;

int main() {
	
    vector<vector<int>> mat = {{10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    
    int rows = mat.size(), cols = mat[0].size();
    
    // original matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    
    vector<vector<int>> tmat(cols, vector<int>(rows, 0));
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            tmat[j][i] = mat[i][j];
        }
    }
    
    
    // transposed matrix
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
                cout << tmat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
