class Solution {
public:
    int y = 0;
    int x = 0;

    void    fix_make(vector<vector<int>>& matrix, vector<int>& result, int& p_x, int& p_y)
    {
        for (; x < matrix[y].size(); x += p_x)
        {
            if (matrix[y][x] == -101)
                break;
            result.push_back(matrix[y][x]);
            matrix[y][x] = -101;
        }
        p_x *= -1;
        x += p_x;
        y += p_y;
        for (; y < matrix.size(); y += p_y)
        {
            if (matrix[y][x] == -101)
                break;
            result.push_back(matrix[y][x]);
            matrix[y][x] = -101;
        }
        p_y *= -1;
        y += p_y;
        x += p_x;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int p_y = 1;
        int p_x = 1;
        int i = 0;

        while (result.size() != matrix.size() * matrix[0].size())
        {
            fix_make(matrix, result, p_x, p_y);
        }
        return (result);
    }
};