//Basic Recursion question
//Time= O(n)
//Space= O(n)
#include <iostream>
using namespace std;

bool linearSearch(int *arr , int n , int val)
{
    //base case
    if(n==0)
     return false;
    if(arr[0] == val)
      return true;
      
    //recursive case
    else{
     bool remainingArray = linearSearch(arr+1 , n-1 , val);
     return remainingArray;
    }
}


int main() {
    
    int arr[]={0,1,4,2,3,5};
    int n=6;
    int val=4;
    int ans= linearSearch(arr,n,val);
    if(ans) 
     cout<<"Element is Present in array: ";
    else
      cout<<"Element is NOT Present in array: ";
  

    return 0;
}
