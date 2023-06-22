//leetcode:443.String Compression {Medium level}

//Time complexity: O(n^2)
//Space complexity:O(1)

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n=chars.size();

        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
             j++;
    /*Comes here when vector is fully traversed or new char is encountered*/
        //store oldChar
        chars[ansIndex++]=chars[i];
        int count=j-i;
        if(count>1){
            //convert countings into single digit & save in answer
            string cnt=to_string(count);
            for(char ch:cnt){
                chars[ansIndex++]=ch;
            }
        }
        i=j;
    }
    return ansIndex;
 }
};
