class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();

        int topRow = 0;
        int bottomRow = n - 1;

        //Vertically Reverse the Matrix
        while(topRow < bottomRow)
        {
            for(int i=0; i<n; i++)
            {
                swap(matrix[topRow][i], matrix[bottomRow][i]);
            }
            topRow++;
            bottomRow--;
        }

        //Transpose the Matrix (swap matrix[i][j] with matrix[j][i])
        //This code swaps the matrix elements as said, excluding the diagonal 
        //as it will stay the same regardless
        for (int row = 0; row < n; row++) 
        {
            for (int col = row + 1; col < n; col++) 
            {
                swap(matrix[row][col], matrix[col][row]);
            }
        }        
    }
};
