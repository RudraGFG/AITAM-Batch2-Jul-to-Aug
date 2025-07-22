class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        int n1 = s.size(), n2 = t.size();

        while(i < n2 && j < n1){
            if(s[j] == t[i]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }

        if(j == n1) return true;
        else return false;
    }
};
