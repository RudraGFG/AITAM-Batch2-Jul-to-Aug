#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {5, 8, 12, 15, 16};
	vector<int> b = {-17, -14, -13, -10};
	
	int n = a.size(), m = b.size();
	
	vector<int> c(n+m, 0);
	
	int i=0, j=0, k=0;
	
	while(i < n && j < m){
	    if(a[i] < b[j]){
	        c[k] = a[i];
	        i++;
	    }
	    else{
	        c[k] = b[j];
	        j++;
	    }
	    
	    k++;
	}
	
	
	// copy the rem. elements of array a
	while(i < n){
	    c[k] = a[i];
	    k++;
	    i++;
	}
	
	// copy the rem. elements of array b
	while(j < m){
	    c[k] = b[j];
	    k++;
	    j++;
	}
	
	// print the array c
	for(int i=0; i<n+m; i++){
	    cout << c[i] << " ";
	}

}
