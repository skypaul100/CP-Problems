//codeStudio: Print like a wave
//Ex- 1 2 3
//    4 5 6
//op= 1 4 5 2 3 6
//Time= O(m*n)
//Space= O(m*n)

#include <bits/stdc++.h> //code
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
 vector<int> ans;
 for(int col=0 ; col<mCols ; col++)
 {
 if(col&1)// or col%2==0 //Odd column index:- Print Bottom to Top
  {
     for(int row=nRows-1 ; row>=0 ; row--){
         ans.push_back(arr[row][col]);
     }
  }
  else //even column index: Print Top to Bottom
  {
      for(int row=0 ; row<nRows ; row++){
          ans.push_back(arr[row][col]);
      }
  }
 }
 return ans;
}
