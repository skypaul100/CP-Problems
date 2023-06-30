//leetcode(easy)  58.Length of Last Word
//Time= O(n)
//Space= O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int wordCount=0 , flag=0;// for going into last word; if last has also space;
        for(int i=n-1 ; i>=0; i--)
        {
        if(s[i]==' ' && flag==1)
          break;
        
        if(s[i]!=' '){
         wordCount++;
         flag=1;
        } 
        }
       return wordCount; 
    }
};
