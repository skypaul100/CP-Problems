

bool checkPalindrome(string str, int s, int e)
{ 
  s=0;
  e=str.length()-1;
  //base case
if(s>e)
   return true; // succesfully matches the characters
if(str[s] != str[e])
  return false;

else
{
 //recursive call
 return checkPalindrome(str , s+1 ,e-1);
}

