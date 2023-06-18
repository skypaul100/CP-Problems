
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
int main() {
    char str[20];
    cout<<"Enter a String: ";
    cin.getline(str,20);
    
    cout<<"Length of string: ";
    cout<<getLen(str);
    
    return 0;
}
