//Creation | Printing | Row-wise Sum
//Time= O(n^2)
//Space= O(n^2)

#include <iostream>
using namespace std;

void printSum(int ar[][3],int r,int c)
{ 
   for(int r=0 ; r<3 ; r++){
       int sum=0;
        for(int c=0 ; c<3 ; c++)
        {
          sum  += ar[r][c];
        }cout<<sum<<endl;
   }
}
int main() {
    int arr[3][3];
    cout<<"Enter the elements in 2d Matrix: \n";
    for(int r=0 ; r<3 ; r++){
        for(int c=0 ; c<3 ; c++){
            cin>>arr[r][c];
        }
    }
    cout<<"\nElements present in 2d Matrix: \n";
    for(int r=0 ; r<3 ; r++){
        for(int c=0 ; c<3 ; c++){
            cout<<arr[r][c]<<" ";
        }cout<<endl;
    }
  cout<<"\n Row-Wise Sum of 2d Matrix is:";
  printSum(arr,3,3);
    return 0;
}
/*
OUTPUT
Enter the elements in 2d Matrix: 
1 2 3 4 5 6 7 8 9 
Elements present in 2d Matrix: 
1 2 3 
4 5 6 
7 8 9 

Row-Wise Sum of 2d Matrix is:
6
15
24
*/
