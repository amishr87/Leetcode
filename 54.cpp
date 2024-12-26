class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row * col;

        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;

        while(count < total)
        {
            //print start row
            for(int index = startCol; index<=endCol && (count < total); index++)
            {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            //print end column
            for(int index = startRow; index<=endRow && (count < total); index++)
            {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //print end row
            for(int index = endCol; index>=startCol && (count < total); index--)
            {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            //print start col
            for(int index = endRow; index>=startRow && (count < total); index--)
            {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
