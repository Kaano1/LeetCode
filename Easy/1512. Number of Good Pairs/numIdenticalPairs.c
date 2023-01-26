int numIdenticalPairs(int* nums, int numsSize)
{
    int catch = 0;
    int i;
    int len = 0;

    while (catch < numsSize)
    {
        i = catch + 1;
        while (i < numsSize)
        {
            if (nums[catch] == nums[i])
                len += 1;
            i += 1;
        }
        catch += 1;
    }
    return (len);
}