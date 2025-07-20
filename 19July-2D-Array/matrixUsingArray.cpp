#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int mat[3][4] = {{10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    
    int rows = sizeof(mat)/sizeof(mat[0]);
    
    int cols = sizeof(mat[0])/sizeof(mat[0][0]);
    
    cout << rows << endl;
    cout << cols << endl;
    
    return 0;
}
