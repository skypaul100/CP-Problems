//leetcode(easy) 349.Intersection of Two Arrays
//Time= O(nlogn) + O(nlogn) + O(m+n) + O(m+n) :- sort nums1 + sort nums2 + while loop + insert into vector from set
//Space= O(n) + O(n):- vector + set

//#include<algorithm>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      
        int m=nums1.size();
        int n=nums2.size();

        sort(nums1.begin() ,nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,j=0;
        //vector<int> temp;
        set<int> temp; // to store unique values for intersection
        while(i<m && j<n)
        {
            if(nums1[i] == nums2[j]) //if matches then push
            {
              temp.insert(nums1[i]);
              i++;
              j++;
            }
            else if(nums1[i] < nums2[j]) i++;

            else if(nums1[i] > nums2[j]) j++;
        }
        //for unique elements in temp
         //temp.erase(unique(temp.begin(),temp.end()) , temp.end());

         //push values to vector to return 
         vector<int> ans(temp.begin() , temp.end());

        return ans;
    }
};
