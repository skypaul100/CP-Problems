//leetcode 125.Valid Palindrome
//Time=O(n)
//Space=O(n) new temp array

class Solution {
public:
    bool valid(char ch) // removes symbols and other chars
    {
     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
         return 1;
     }
    return 0;
    }
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
           return ch;
        else{
            char temp=ch-'A'+'a';
            return temp;
        } 
       
    }
    bool checkPalindrome(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(toLowerCase(a[s]) != toLowerCase(a[e]))
               return 0;
            else{
                s++;
                e--;
            }
        }return 1;
    }
    bool isPalindrome(string s) {

        //remove symbols
        string temp="";

        for(int j=0 ; j<s.length(); j++){
            if(valid(s[j]))
              temp.push_back(s[j]);
        }
        //change to lower case
        for(int i=0 ; i<temp.length() ; i++){
            temp[i]=toLowerCase(temp[i]);
        }
        //check palindrome
        return checkPalindrome(temp);
    }
};
