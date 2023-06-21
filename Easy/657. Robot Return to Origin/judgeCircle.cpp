class Solution {
public:
    bool judgeCircle(string moves) {
        int i = -1;
        int mu = 0;
        int mv = 0;

        while (moves[++i])
            if (moves[i] == 'D')
                mu -= 1;
            else if (moves[i] == 'U')
                mu += 1;
            else if (moves[i] == 'L')
                mv += 1;
            else if (moves[i] == 'R')
                mv -= 1;
        if (mu == 0 && mv == 0)
            return (true);
        return (false);
    }
};