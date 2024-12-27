class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        //declare matrix of size n * n
        vector<vector<int>> ans(n, vector<int>(n)); 

        int count = 0;
        int fillerNo = 1;
        int total = n * n;

        int startRow = 0;
        int startCol = 0;
        int endRow = n - 1;
        int endCol = n - 1;

        while(count < total)
        {
            //fill start row
            for(int index = startCol; index<=endCol && (count < total); index++)
            {
                ans[startRow][index] = fillerNo++;
                count++;
            }
            startRow++;

            //fill end column
            for(int index = startRow; index<=endRow && (count < total); index++)
            {
                ans[index][endCol] = fillerNo++;
                count++;
            }
            endCol--;

            //fill end row
            for(int index = endCol; index>=startCol && (count < total); index--)
            {
                ans[endRow][index] = fillerNo++;
                count++;
            }
            endRow--;

            //fill start col
            for(int index = endRow; index>=startRow && (count < total); index--)
            {
                ans[index][startCol] = fillerNo++;
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
