//Check if Array Is Sorted and Rotated : leetcoe 1752

//eg : [3,4,5,1,2] true
//     [1,1,1] true
//     [1,2,3] true


    bool check(vector<int>& nums) {

        int count=0; //count no. of pairs ; if >1 in condn. result become false
        int n=nums.size();

        for(int i=1 ; i<n ; i++)
        {   
            //case1: Not sorted whole array
            if(nums[i-1] > nums[i])
              count++;
        }

        //case2: last elt is > 1st elt. Not sorted as per question
        if( nums[n-1] > nums[0] )
          count++;
         
        //case3: only 1 pair in the middle is greater and else are sorted

        return count<=1;// ,=1 then returns true
    }
