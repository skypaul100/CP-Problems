//codeStudio: check if string is Palindrome


/***** Full Palindrome Solution******/
//Basic Type: checking 1st and last elt, 2nd and 2nd last and so on

#include <iostream>
using namespace std;
int getLen(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
//Func to reverse a string
string reverse(char str[],int n){
   int s=0;
   int e=n-1;
   while(s<e){
       swap(str[s++],str[e--]);
   }
   return str;
}
//checks palindrome
bool checkPalindrome(char str[],int n)
{
  int s=0 ;
  int e=n-1;
  
  while(s<=e)
  {
    if(str[s]!=str[e]) // Not Matches
    {
      return 0;
    }
    else{
      s++;
      e--;
    }
    return 1;
  }
}
int main() {
    char str[20];
    cout<<"Enter a String: ";
    cin.getline(str,20);
    
    int len=getLen(str);
    
    cout<<"Reverse of String: ";
    cout<<reverse(str,len);
    
    cout<<endl;
    cout<<"Palindrome: ";
    if(checkPalindrome(str,len)==1)
    cout<<"Yes";
    else
     cout<<"No";
      
    return 0;
}
