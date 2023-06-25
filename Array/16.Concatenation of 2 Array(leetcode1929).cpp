//leetcode(easy): 1929.Concatenation of 2  Array

//Time complexity:O(n)
//Space complexity:O(n)

class Solution {
public:
    //Push the same elements again in vector at end.
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0 ; i<n ; i++)
        {
           nums.push_back(nums[i]);//just push the same elements again in vector
        }
    return nums;
    }
};
