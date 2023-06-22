class Solution {
public:
    int countOdds(int low, int high) 
    {
        int len = 0;

        for (int i = 0; low + i <= high; i++)
        {
            if ((low + i) % 2 != 0)
                len += 1;
        }
        return (len);
    }
};