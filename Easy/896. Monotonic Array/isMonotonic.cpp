class Solution {
public:
    bool difficult(int dif, int val)
    {
        if (val == 0)
            return (false);
        else if (dif == -1 && val > dif)
            return (true);
        else if (dif == 1 && val < dif)
            return (true);
        return (false);
    }

    int findDif(vector<int>& num)
    {
        int i = -1;

        while (++i < num.size() - 1)
            if (num[i] - num[i + 1] != 0)
                return (num[i] - num[i + 1]);
        return (0);
    }

    bool isMonotonic(vector<int>& nums)
    {
        int dif = findDif(nums);
        int i = -1;

        dif > 0 ? dif = 1 : dif = -1;
        while (++i < nums.size() - 1)
            if (nums[i] - nums[i + 1] != 0 && difficult(dif, nums[i] - nums[i + 1]))
                return (false);
        return (true);
    }
};