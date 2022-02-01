int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int tmp = 0, i = 0;
    for (i = 0; i < numsSize; i++)
        tmp ^= nums[i];
    int tmpp = 0, onlyone = 0;
    if (tmp == -2147483648)
        onlyone = 1;
    else
        onlyone = (tmp) & (~tmp + 1);
    for (i = 0; i < numsSize; i++)
    {
        if ((nums[i] & onlyone))
            tmpp ^= nums[i];
    }
    *returnSize = 2;
    int* ans = (int*)calloc(*returnSize, sizeof(int));
    ans[0] = tmpp ^ tmp;
    ans[1] = tmpp;
    return ans;
}