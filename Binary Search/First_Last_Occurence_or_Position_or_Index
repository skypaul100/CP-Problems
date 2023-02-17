//First and Last(or Leftmost & Rightmost) occurence/position/index of a Particular Element 
//Using Binary Search:- T(n)= O(log n)

#include <iostream>
using namespace std;

int firstOccurence(int a[],int n,int key)
{
  int start=0,end=n-1;
  int mid; //=s+(e-s)/2;
  int find=-1;
  
  while(start<=end) //Initially I did a silly mistake of NOT using
  {                 // <=; used only <. Hence, it wasn,t giving
                   //for only 2 elements in array.
                   
  mid=start+(end-start)/2;//To avoid the Edge case of being INT_MAX
      
  if(a[mid]==key)
  {
    find=mid;  //to find leftmost occurence, 
    end=mid-1; // keeps in Left subarray from {0 to mid-1}
  }
  else if(key>a[mid]) //Check right subarray
    start=mid+1;

  else if(key<a[mid]) //check left subarray
    end=mid-1;
        
  // mid=s+(e-s)/2;
  }
  return find;
}
  int lastOccurence(int a[],int n,int key){
  
  int start=0,end=n-1;
  int mid; //=s+(e-s)/2;
  int find=-1;
  
  while(start<=end) //Initially I did a silly mistake of NOT using
  {                // <=; used only <. Hence, it wasn't giving correct output
                   //for only 2 elements in array.
                   
  mid=start+(end-start)/2; //To avoid the Edge case of being INT_MAX
      
  if(a[mid]==key)
  {
    find=mid;   //to find rightmost occurence, 
    start=mid+1;//keeps going in right subarray from {mid+1 to end}
  }             //only differencce in two function is this above line
                //i.e for lefttmost/first=> start=0 to end= mid-1... 
  
  
  else if(key>a[mid]) //Check right subarray
    start=mid+1;

  else if(key<a[mid]) //check left subarray
    end=mid-1;
        
  // mid=s+(e-s)/2;
  }
  return find;
}

int main() 
{
    int a[]={0,2,2,2,2,4};// To use the Binary Search array must be in sorted order
    int n=sizeof(a)/sizeof(a[0]);
    int First=firstOccurence(a,n,2);
    int Last=lastOccurence(a,n,2);
    cout<<"First Index=> "<<First;
    cout<<"\nLast Index=> "<<Last;
    return 0;
}

/*
 Output: 
 
 First Index=> 1
 Last Index=> 4   */
