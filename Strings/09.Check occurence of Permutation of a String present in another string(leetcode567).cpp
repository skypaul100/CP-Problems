//Leetcode: 567. Check occurence of Permutation of a String present in another String
//Sliding Window Approach

//Time complexity: O(m+n)
//m=s1 string length
//n=s2 string length
//Space complexity:O(1)

class Solution {
public:
    bool checkEqual(int a[26],int b[26]){
        for(int i=0 ; i<26 ; i++){
          if(a[i]!=b[i])
            return 0;
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
    //character count and store in array
    int count1[26]={0};

    for(int i=0;i<s1.length(); i++)
    {
        int index= s1[i]-'a';
        count1[index]++;
    }
    //traverse s2 string in in WINDOW SIZE s1 length and  compare
    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};

    //running the first window
    while(i<windowSize && i<s2.length())
    {
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2))
       return 1;
    //visit next windows
    while(i<s2.length()){
        char newChar=s2[i];
        int  index=newChar-'a';
        count2[index]++;
    
        char oldChar=s2[i-windowSize];
        index=oldChar -'a';
        count2[index]--;

        i++;
    if(checkEqual(count1,count2)) 
      return 1;        
    }
    return 0;
 }
};
