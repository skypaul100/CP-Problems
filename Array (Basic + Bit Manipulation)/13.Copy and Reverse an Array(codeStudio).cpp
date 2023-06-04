#include <bits/stdc++.h> 

//copy and reverse an array : codeStudio
vector<int> copyAndReverse(vector<int> arr, int n) {
	// Write your code here.

	vector<int> copyArr;

	for(int i=n-1 ; i>=0 ; i--)
	  copyArr.push_back(arr[i]);

	return copyArr;
}	
