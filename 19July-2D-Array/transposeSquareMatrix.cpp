#include <bits/stdc++.h>
using namespace std;

int main() {
	
    vector<vector<int>> mat = {{10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int n = mat.size();
    
    // before transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    cout << endl;
    
    // after transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
