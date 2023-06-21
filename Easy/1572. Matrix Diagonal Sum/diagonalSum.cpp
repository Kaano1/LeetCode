class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int sumOfMatrix = 0;
        int primary = mat.size() - 1;

        for (int y = 0; y <= primary; y++)
        {
            for (int x = 0; x <= mat[y].size(); x++)
            {
                if (y == x)
                    sumOfMatrix += mat[y][x];
                else if (y + x == primary)
                    sumOfMatrix += mat[y][x];
            }
        }
        return (sumOfMatrix);
    }
};
