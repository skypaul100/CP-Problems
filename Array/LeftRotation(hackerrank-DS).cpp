
/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {

 //vector<int> number={1,2,3,4,5};
   int n=arr.size();
   
   /*for(int j=0 ; j<d ; j++)
   {
    int temp=arr[0];
    
   for(int i=0 ; i<n-1 ; i++)
   {
     arr[i]=arr[i+1];
   }
    arr[n-1]=temp;
    
   }*///time limit exceeds
   
   
   vector<int> output(n);
   for (int i=0; i<n ;i++) 
   {
       output[(i-d+n)%n]=arr[i];// Formula to stop time limit exceeding
   
   }
    
   return output;
}
