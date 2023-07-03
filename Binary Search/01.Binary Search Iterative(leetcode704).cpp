//leetcode(easy) 704.Binary Search Iterative
//Time complexity: O(log n)
//Space complexity: O(n)

class Solution {
public:
    //Array must be sorted for binary search
    //Iterative implementation
    int search(vector<int>& nums, int target) {
        int s=0 ; 
        int e=nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid] == target)
              return mid; // as per question return the index ;if target exists
            
            else if(nums[mid] > target) // If target is smaller, ignore right half
              e=mid-1;
            else
              s=mid+1;   // If target greater, ignore left half
        }
        return -1; //not found
        
    }
};
