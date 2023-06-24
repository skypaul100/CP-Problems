//leetcode(hard): 04.Median of Two Sorted Arrays.

//Time : O(n)+O(nlogn)+O(n)
//Space : O(1)

//Approach: Brute Force
// 1.Merge Both Array
// 2.Sort them
// 3.Find Median

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(int i=0 ; i<nums1.size() ; i++) // Merge the array
          temp.push_back(nums1[i]);
        
        for(int i=0 ; i<nums2.size() ; i++)// Merge the array
          temp.push_back(nums2[i]);

        sort(temp.begin(),temp.end()); // Sort the array

        double ans;
        int n=temp.size();

        if(n%2==0){
           ans= temp[n/2-1] + temp[(n/2)];// Median for even elements
           return ans/2;
        }
        else{
          ans= temp[n/2]; //Median for odd elements
          return ans;
        } 
        //or return (n%2==0) ? (temp[n/2-1] + temp[(n/2)])/2 : temp[n/2];
    }
};
