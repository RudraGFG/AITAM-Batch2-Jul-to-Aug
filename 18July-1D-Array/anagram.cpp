class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
       vector<int> freq(26, 0);
       
       int n1 = s1.size(), n2 =s2.size();
       
       // count freq of characters of s1
       for(int i=0; i<n1; i++){
           freq[s1[i] - 'a']++;
       }
       
       // now try to cut the frequencies of s2
       for(int i=0; i<n2; i++){
           freq[s2[i] - 'a']--;
       }
       
       // check if every index is 0
       for(int i=0; i<26; i++){
           if(freq[i] != 0){
               return false;
           }
       }
       
       return true;
    }
};
