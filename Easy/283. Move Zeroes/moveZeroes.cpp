class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int i = 0;
        int len = 0;

        while (i < nums.size())
        {
            if (nums[i] != 0)
            {
                nums[len] = nums[i];
                if (i != len)
                    nums[i] = 0;
                ++len;
            }
            else
                nums[i] = 0;
            i++;
        }
    }
};
