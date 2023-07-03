//Basic Recursion question
//Time= O(n)
//Space= O(n)
#include <iostream>
using namespace std;
int getSum(int *arr , int n){
    //base case
    if(n==0) 
      return 0;
      
    if(n==1)
     return arr[0];
     
    //recursive case
    int remainingArray = getSum(arr+1 , n-1);//recursion
    int sum= arr[0] + remainingArray;
    return sum;
   
    }

int main() {
    
    int arr[]={0,1,4,2,3,5};
    int n=6;
    int ans= getSum(arr,n);
    
   cout<<"Sum of Elements in array: "<<ans;
  

    return 0;
}
