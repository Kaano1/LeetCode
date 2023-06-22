class Solution {
public:
    void zeros(int y, int x, vector<vector<int>>& matrix, int add, int key)
    {
        if (key == 0 && y != matrix.size() && y >= 0)
        {
            matrix[y][x] = 0;
            zeros(y + add, x, matrix, add, key);
        }
        else if (key == 1 && x != matrix[0].size() && x >= 0)
        {
            matrix[y][x] = 0;
            zeros(y, x + add, matrix, add, key);
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> zsh;

        for(int y = matrix.size() - 1; y >= 0; --y)
        {
            for (int x = matrix[y].size() -1; x >= 0 ; --x)
                if (matrix[y][x] == 0)
                    zsh.push_back(y), zsh.push_back(x);
        }
        for (int i = 0; i < zsh.size(); i += 2)
        {
            zeros(zsh[i], zsh[i + 1], matrix, 1, 0);
            zeros(zsh[i], zsh[i + 1], matrix, -1, 0);
            zeros(zsh[i], zsh[i + 1], matrix, 1, 1);
            zeros(zsh[i], zsh[i + 1], matrix, -1, 1);
        }
    }
};