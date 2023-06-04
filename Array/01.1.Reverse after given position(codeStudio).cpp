#include <bits/stdc++.h> 
//reverse the array after 'm' indices/ given position: codestudio

void reverseArray(vector<int> &arr , int m)
{
	
	int start=m+1,end=arr.size()-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		end--;
		start++;
	}
}
