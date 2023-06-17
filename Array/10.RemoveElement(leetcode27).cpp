//leetcode 27.Remove Element

int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int> temp;
        for(int i=0 ; i<nums.size(); i++)
        {
            if(nums[i]!=val){
              count++;
              temp.push_back(nums[i]);

             }
        }
        nums=temp;
        return count;
    }
};

//Time= O(n)
//Space= O(n) Since using a extra temp vector
