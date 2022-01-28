int removeDuplicates(int* nums, int numsSize) {
    int count = 0; int i = 1;
    if (numsSize)
    {
        for (i = 1, count = 1; i < numsSize; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                nums[count] = nums[i];
                ++count;
            }
        }
    }
    return count;
}
int main()
{
    return 0;
}