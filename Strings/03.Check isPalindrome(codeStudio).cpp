//codeStudio: check if string is Palindrome


/*****Basic Type: Full Palindrome Solution******/
bool checkPalindrome(char str[],int n)
{
  int s=0 ;
  int e=n-1;
  
  while(s<=e)
  {
    if(a[s]!=a[e]) // Not Matches
    {
      return 0;
    }
    else{
      s++;
      e--;
    }
    return 1;
  }
