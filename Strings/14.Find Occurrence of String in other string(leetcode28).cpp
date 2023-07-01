//leetcode(easy): 28.Find the Index of the First Occurrence in a String
//Time= O(n)
//Space= O(1)

int strStr(string haystack, string needle) {

        int n= needle.size();
        int m= haystack.size();

        //iterate over haystack to find each element of needle
        for(int i=0 ; i<m ; i++)
        {
            int j=0; //hold index of needle element
            int k=i; //will start from i, will go towards j; to mstch the word

            //this loop will traverse over needle to check
            //if its word starting from i matches in haystack
            while(haystack[k] == needle[j]  && j<n)
            {
                k++; j++;
            }
            //if j==n needle matches haystack
            //then return i of haystcick index where it matched
            if(j == n)
             return i;
        }
        return -1;//if word not found
    }
