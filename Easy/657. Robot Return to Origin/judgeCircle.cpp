class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0;
        int mu = 0;
        int md = 0;
        int mc = 0;
        int mv = 0;

        while (moves[i])
        {
            if (moves[i] == 'D')
                md += 1;
            else if (moves[i] == 'U')
                mu += 1;
            else if (moves[i] == 'L')
                mv += 1;
            else if (moves[i] == 'R')
                mc += 1;
            i++;
        }
        if (mu - md == 0 && mc - mv == 0)
            return (true);
        return (false);
    }
};