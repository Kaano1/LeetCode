class Solution {
public:
    bool lemonadeChange(vector<int>& bills)
    {
        int     customer = bills.size();
        int     cost[] = {0, 0, 0};
        int     left;
        bool    result = true;

        for (int i = 0; i < customer; i++)
        {
            left = bills[i] - 5;
            if (left > 9 && cost[1] > 0)
            {
                left -= 10;
                cost[1] -= 1;
            }
            while (left > 0 && cost[0] > 0)
                left -= 5, cost[0] -= 1;
            if (left > 0)
                return (false);
            cost[(bills[i] / 9)] += 1;
        }
        return (result);
    }
};