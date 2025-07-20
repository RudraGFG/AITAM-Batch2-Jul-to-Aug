#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& arr, int target) {
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target){
            return i;
        }
    }
    
    return -1;
}

int lastOcc(vector<int>& arr, int target) {
    int ans = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target){
            ans = i;
        }
    }
    
    return ans;
}

vector<int> allOcc(vector<int>& arr, int target) {
    vector<int> ans;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target){
            ans.push_back(i);
        }
    }
    
    return ans;
}


int main() {
	
	vector<int> arr = {10, 20, 20, 20, 20, 30, 40};
	
	int target = 20;
	
	int fo = firstOcc(arr, target);
	
	int lo = lastOcc(arr, target);
	
	vector<int> ao = allOcc(arr, target);
	
	cout << fo << endl;
	cout << lo << endl;
	
	for(int i=0; i<ao.size(); i++){
	    cout << ao[i] << " ";
	}

}
