class Solution {
public:
    bool isSafe(int n, int row, int col, vector<string>& board){
        // horizontally
        for(int j=0; j<n; j++){
            if(board[row][j] == 'Q'){
                return false;
            }
        }
        
        // vertically
        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q'){
                return false;
            }
        }
        
        // diagonally
        int i = row, j = col;
        while(i>=0 && j<n){
            if(board[i][j] == 'Q'){
                return false;
            }
            i--;
            j++;
        }
        
        // anti-diagonally
        i = row, j = col;
        while(i>=0 && j >= 0){
            if(board[i][j] == 'Q'){
                return false;
            }
            i--;
            j--;
            
        }
        
        
        return true;
    }
    void f(int n, int row, vector<string>& board, vector<vector<string>>& ans){
        // base case
        if(row == n){
            ans.push_back(board);
            
            return;
        }
        
        
        // recursive case
        for(int col=0; col<n; col++){
            // i will place the queen only if
            // the cell is safe
            
            if(isSafe(n, row, col, board) == true){
                board[row][col] = 'Q';
                f(n, row+1, board, ans);
                board[row][col] = '.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        
        vector<string> board (n, string(n, '.'));
        
        f(n, 0, board, ans);
        
        return ans;
    }
};
