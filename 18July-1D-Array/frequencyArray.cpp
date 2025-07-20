#include <bits/stdc++.h>
using namespace std;

int main() {
	
    string s = "aAAAbbBzzZZ";
    
    int n = s.size();
    
    vector<int> lfreq(26, 0);
    vector<int> ufreq(26, 0);
    
    for(int i=0; i<n; i++){
        char ch = s[i];
        
        if(ch >= 'a' && ch <= 'z'){
            // lowercase letter
            lfreq[ch - 'a']++;
        }
        else{
            // uppercase
            ufreq[ch - 'A']++;
        }
    }
    
    // printing lowercase letter frequencies
    for(int i=0; i<26; i++){
        if(lfreq[i] > 0){
            cout << (char)(i + 'a') << "->" << lfreq[i] << endl;
        }
    }
    
    cout << endl;
    
    // printing uppercase letter frequencies
    for(int i=0; i<26; i++){
        if(ufreq[i] > 0){
            cout << (char)(i + 'A') << "->" << ufreq[i] << endl;
        }
    }
    
    return 0;
}
