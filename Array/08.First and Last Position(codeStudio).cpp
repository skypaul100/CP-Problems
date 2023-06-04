#include <bits/stdc++.h> 
 //first And Last Position of elt in sorted array : codeStudio
 // O(n) + O(n)

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int firstPos=-1 , lastPos=-1;
    for(int i=0 ; i<n ; i++)
    {
     if(arr[i]==k)
     {
         firstPos=i;
         break;
     }
    }
     for(int j=n-1 ; j>=0 ; j--)
    {
     if(arr[j]==k)
     {
         lastPos=j;
         break;
     }
    }
    return {firstPos , lastPos}; //pair<int,int>
}
