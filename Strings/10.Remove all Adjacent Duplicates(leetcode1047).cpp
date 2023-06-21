// leetcode: 1047.Remove all Adjacent Duplicates.

//Basic String Operation using push & pop;
//No stacks
// Time complexity: O(n)
// Space complexity: O(n)

class Solution {
public:
//Basic opn. using strings and temp array; No stacks
    string removeDuplicates(string s) {
        string temp="";

        for(int i=0 ;i<s.length(); i++){
            if(temp.empty() || s[i]!=temp.back())
            {
                temp.push_back(s[i]); //if present char in string and last char temp don't matches
            }
            else
              temp.pop_back(); //if matches pop from temp
        }
        return temp;
    }
};
