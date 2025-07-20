class Solution {
public:
    void rotate(vector<vector<int>>& mat) {

        int n = mat.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        int left = 0, right = n - 1;

        while (left <= right) {
            for (int i = 0; i < n; i++) {
                swap(mat[i][left], mat[i][right]);
            }

            left++;
            right--;
        }
    }
};
