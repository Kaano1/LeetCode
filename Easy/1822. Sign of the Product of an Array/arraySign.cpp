class Solution {
public:
    int signFunc(int num)
    {
        if (num > 0)
            return (1);
        else if (num < 0)
            return (-1);
        return (0);
    }
    int arraySign(vector<int>& nums) {
        int i = nums.size();
        int result = 1;

        while (--i != -1)
        {
            (nums[i] > 0) ?  result *= 1 : result *= -1;
            if (nums[i] == 0)
                result = 0;
        }
        return (signFunc(result));
    }
};