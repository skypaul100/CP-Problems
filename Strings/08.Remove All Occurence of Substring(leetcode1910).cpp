//leetcode: 1910.Remove All Occurence of Substring.
//Time= O(n)
//Space= O(1)


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;        
    }
};
