//leetcode: 35.Search Insert Position of Element in Array

//Brute Force Approach to trverse the whole array and find the required position;Complexity
//Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
      int pos=0;  //nums.size();
      for(int i=0 ; i<nums.size() ; i++){
          if(nums[i]>= target){
            pos=i;
            break;
          }
         else 
          pos=nums.size();
            

      }
        return pos;
    }
};
