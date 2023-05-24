// move all 0's to the end of array
// Input: nums = [0,1,0,3,12]
// Output:       [1,3,12,0,0]

void moveZeroes(vector<int>& nums) {
        int zeroIndex=0;

        for(int i=0 ; i< nums.size(); i++ )
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[zeroIndex] );
                zeroIndex++;
            }
        }
        
    }
