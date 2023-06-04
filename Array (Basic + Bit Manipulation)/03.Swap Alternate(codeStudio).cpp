void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i=0 ; i<size ; i+=2) // alternate
    {
        if(i+1 < size)
         swap(arr[i],arr[i+1]);
    }
}
