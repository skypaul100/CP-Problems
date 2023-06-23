//leetcode(medium): 54.Print Spiral Order of 2D Matrix

//Time complexity:O(m*n)
//Space complexity:O(n) for using vector ans.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row= matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;
        //Index Initialisation
        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;

        while(count < total)
        {
        //1. Print 1st Row : L->R
        for(int index=startCol ; count<total && index<=endCol ; index++)
        {
            ans.push_back(matrix[startRow][index]);
            count++;
        } startRow++;
        //2. Print last Column: T->B
        for(int index= startRow ; count<total && index<=endRow ; index++)
        {
            ans.push_back(matrix[index][endCol]);
            count++;
        }endCol--;
        //3. Print Last Row: R->L
        for(int index=endCol ; count<total && index>=startCol ; index--)
        {
            ans.push_back(matrix[endRow][index]);
            count++;
        }endRow--;
        //4. Print First Column: B->T
        for(int index=endRow ; count<total && index>=startRow ; index--)
        {
            ans.push_back(matrix[index][startCol]);
            count++;
        }startCol++;
        }
     return  ans;  
    }
};
