#include <bits/stdc++.h>

//Approach "1"
//merge two sorted arrays into ""third"" array : coding ninjas
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
 int i = 0;

  int j = 0;

  vector<int> arr3;

  while (i < m && j < n) {

    if (arr1[i] < arr2[j]) {

      arr3.push_back(arr1[i++]); //using vector so pushback
      //in int array: arr3[k++]=arr1[i++]
    } else {

      arr3.push_back(arr2[j++]);

    }

  }

   //copy ist array remaining elements
  while (i < m) {

    arr3.push_back(arr1[i++]);

  }
//copy 2nd array remaining elements
  while (j < n) {

    arr3.push_back(arr2[j++]);

  }

  return arr3;
}
// T.C = O(m+n)

//Approach "2"
//merge two sorted arrays into ""First"" array : coding ninjas + leetcode

class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

 int i = 0;

  int j = 0;

  //int k= m+n;

  vector<int> nums3;

  while (i < m && j < n) {

    if (nums1[i] < nums2[j]) {

      nums3.push_back(nums1[i++]);

    } else {

      nums3.push_back(nums2[j++]);

    }

  }

  while (i < m) {

    nums3.push_back(nums1[i++]);

  }

  while (j < n) {

    nums3.push_back(nums2[j++]);

  }

//The final sorted array should not be returned by the function, but instead be 
//stored inside the array nums1
  nums1= nums3;
  

  //or use 'k' to put in nums1 using arrays

 }
};



