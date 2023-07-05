int power(int a, int b) // a ^ b
{
  //base
  if(b==0)
    return 1;
  if(b==1)
    return a;
  
  //recursive call
  int ans= power(a,b/2);
  //if b is even
  if(b%2 == 0)
  {
   return ans*ans;
  }
  //if b is odd
  else{
   return a*ans*ans;
  }
}
