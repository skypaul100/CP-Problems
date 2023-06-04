#include <bits/stdc++.h> 

int sumOfMaxMin(int arr[], int n){
	//since a array so using basic implementation
	//if were a vector then use sort() to solve
	int max=INT_MIN;

	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}
	}

	int min=INT_MAX;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]<min){
			min=arr[i];
		}
	}

	int sum = min + max;

	return sum;
}
