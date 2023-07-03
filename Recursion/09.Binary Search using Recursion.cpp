//Binary search basiccode + codestudio question + 703.leetcode question
//Time= O(log n)
//Space= O(n)

#include <iostream>
using namespace std;

bool binarySearch(int *arr ,int s, int e , int val)
{
    while(s<=e){
    
        int mid= s + (e-s)/2;
        //base case
        if(arr[mid] == val)
         return true;
        
        //recursive case
        if(arr[mid] > val)
          return binarySearch(arr , s ,mid-1 ,val);
        else
          return binarySearch(arr, mid+1 , e , val);
    }
 return false;
}

void print(int *arr,int n)
{   
    cout<<"Elements in array are: \n";
    for(int i=0 ; i<n ; i++)
      cout<<arr[i]<<" ";
    cout<<endl;
}


int main() {
    
    int arr[]={0,1,2,3,4,5}; // Array must be sorted
    int n=6;
    int val=4;
    print(arr,n);
    int ans= binarySearch(arr,0,n-1,val);
    cout<<"Search the value: "<<val<<endl;
    if(ans) 
     cout<<"Element is Present in array: ";
    else
      cout<<"Element is NOT Present in array: ";
  

    return 0;
}
