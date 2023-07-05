//codestudio(easy)
//Time= O(n)
//Space= O(n)

#include <bits/stdc++.h> 
void reverse(string& str, int s, int e)
{
 // int s=0 , e=str.length()-1;
 //reverse using recursion

  //base 
   if( s>e )
    return;
  //driver code
   swap(str[s] , str[e]);
   s++;
   e--;

   //recrsive code
   reverse(str , s, e);

}

string reverseString(string str)
{
	 reverse(str, 0 ,str.length()-1);
	 return str;
}
