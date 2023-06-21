class Solution {
public:
    bool    rilef(vector<vector<int>>& moves, int size)
    {
        int right = 0;
        int left = 0;
        
        while (size >= 0)
        {
            if (moves[size][0] + moves[size][1] == 2)
                left += 1;
            if (moves[size][0] == moves[size][1])
                right += 1;
            size -= 2;
        }
        if (left == 3 || right == 3)
            return (true);
        return (false);
    }

    string  tictactoe(vector<vector<int>>& moves) 
    {
        int len = moves.size() - 1;
        if (len < 4)
            return ("Pending");
        int keep = len;
        int x = 0;
        int y = 0;
        string result;
        
        moves.size() % 2 == 0 ? result = "B" : result = "A";
        if ((moves[len][0] + moves[len][1] == 2) || (moves[len][0] == moves[len][1]))
            if (rilef(moves, len))
                return (result);
        while (len >= 0)
        {
            if (moves[keep][0] == moves[len][0])
                y += 1;
            if (moves[keep][1] == moves[len][1])
                x += 1;
            len -= 2;
        }
        if (y == 3 || x == 3)
            return (result);
        else if (moves.size() == 9)
            return ("Draw");
        return ("Pending");
    }
};