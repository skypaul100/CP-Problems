//leetcode(easy): 2315.Count Asterisks

//Time complexity: O(n) for traversing the whole string.
//Space complexity:O(1)

class Solution {
public:
    int countAsterisks(string s) {
        int starCount=0 , barCount=0;

        for(int i=0  ;  i<s.length() ; i++)
        {
            if(s[i] == '|') //count the |
              barCount++;

            if(barCount%2==0) //For every consecutive | 
            {
                if(s[i]=='*') //Count asterisk
                  starCount++;
            }
        }
        return starCount;
    }
};
