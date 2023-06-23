//Maximum row sum problem.

void maxSum(int ar[][3],int r,int c)
{   int max=INT_MIN;
    int rowIndex; 
    for(int r=0 ; r<3 ; r++){
        int sum=0;
        for(int c=0 ; c<3  ; c++){
            sum+=ar[r][c];
        }
        if(max<sum)
        {
          max=sum;
          rowIndex=r;
        }
    }
    cout<<"Maximum sum of row is "<<max<<" of Row "<<rowIndex;
}
