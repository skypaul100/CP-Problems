//leetcode(easy): 189.Rotate Array by K pos
//Time: O(n)
//Space: O(n)
void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int> temp(nums.size());

        for(int i=0 ; i<n ; i++)
        {
          temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    
        for(int i=0 ; i<n ; i++)
           cout<<nums[i]<<" ";
        
    }
