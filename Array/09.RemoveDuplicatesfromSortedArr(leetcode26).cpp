//leetcode 26. Remove Duplicates from Sorted Array


 int removeDuplicates(vector<int>& nums) {
      
      int i=0;
      for(int j=1 ;j<nums.size();j++)
      {
          if(nums[i]!=nums[j]){
              i++;
              nums[i]=nums[j];
          }
      }
        return i+1;//which is k i.e total non duplicate nums
    }
//T(n)= O(n)
//S(n)=O(1)
