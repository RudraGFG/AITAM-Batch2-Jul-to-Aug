#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<int,int> ump;
	
	// insert method
	ump.insert({10, 5});
	ump.insert({3, 1});
	ump.insert({20, 2});
	ump.insert({100, 6});
	
	cout << ump.size() << endl;
	
	
// 	ump.erase(10);
// 	ump.erase(3);
// 	ump.erase(20);
	ump.erase(100);
	
	
	if(ump.empty() == true){
	    cout << "Map is empty!" << endl;
	}
	else{
	    cout << "Map is not empty!" << endl;
	}
	
	if(ump.find(100) == ump.end()){
	    cout << "100 is not present" << endl;
	}
	else{
	    cout << "100 is present" << endl;
	}
}
