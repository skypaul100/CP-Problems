//Basic recursion question
//Time= O(n)
//Space= O(n) due to callstack
#include <iostream>
using namespace std;
bool isSorted(int arr[] , int n){
    //base case
    if(n==0 || n==1) 
      return true;
    
    //recursive case
    if(arr[0] > arr[1])
      return false;
      
    else{
     int remainingArray = isSorted(arr+1 , n-1); //recursion
     return remainingArray;
    }
}

int main() {
    
    int arr[]={0,1,2,2,3,5};
    int n=6;
    int ans= isSorted(arr,n);
    
    if(ans)
      cout<<"Array is Sorted!";
    else
      cout<<"Array is Not Sorted!";
  

    return 0;
}
