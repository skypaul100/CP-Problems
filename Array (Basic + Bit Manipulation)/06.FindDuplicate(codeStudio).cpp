//using Bit Manipulation O(n) for n length array

#include<algorithm>
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    //I. XORing all elts
    for (int i = 0; i < arr.size(); i++) {
      ans = ans ^ arr[i]; // gives unique ones
    }
    
    //II. XORing now from 0 to n
    for (int i = 1; i < arr.size(); i++) {
      ans = ans ^ i;
    }
    return ans;//duplicate
}






//Normal way using sort and compare
//O(nlogn) due to sort and O(n) to compare
#include<algorithm>
int findDuplicate(vector<int> &arr) 
{
    // Write your code here

   //vector<int> ans;

   sort(arr.begin(),arr.end());

   for(int i=0 ; i<arr.size() ; i++)
   {
       if(arr[i]==arr[i+1])
         return arr[i];
   }
	return -1;
}
