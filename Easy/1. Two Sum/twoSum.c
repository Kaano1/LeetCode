int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *result = calloc(sizeof(int), 2);
    int i = 0, j = 0;
    
    *returnSize = 2;
    while (i < numsSize)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return (result);
            }
            j += 1;
        }
        i += 1;
    }
    return (0);
}
