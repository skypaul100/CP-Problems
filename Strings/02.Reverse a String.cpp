
#include <iostream>
using namespace std;
//Func. to get length of string
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
int main() {
    char str[20];
    cout<<"Enter a String: ";
    cin.getline(str,20);
    
    int len=getLen(str);
    
    cout<<"Reverse of String: ";
    cout<<reverse(str,len);
    
    return 0;
}
