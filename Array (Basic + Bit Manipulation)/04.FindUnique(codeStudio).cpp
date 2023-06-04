//Bit Manipulation

int findUnique(int *arr, int size)
{
    //using bit manipulation : xor
    //1^1=0 ; 1^0=1; 
    // 1^2^2^3^1 = 3

    int ans = 0;
    for(int i=0 ; i<size ; i++)
    {
        ans=ans ^ arr[i];
    }

    return ans;
}
