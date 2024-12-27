class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row = matrix.size();
        int col = matrix[0].size();

        //we will use these to start our search from first row, last column
        int rowIndex = 0;     
        int colIndex = col - 1;

        while(rowIndex<row && colIndex>=0)
        {
            int element = matrix[rowIndex][colIndex];

            if(element == target)
            {
                return true;
            }
            else if(element < target)
            {
                rowIndex++;
            }
            else 
            {
                colIndex--;
            }
        }
        return false;
    }
};
