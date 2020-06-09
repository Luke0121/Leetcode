int maxSubArray(int* nums, int numsSize){
    int index;
    int sumSubArray = nums[0];
    int tmpMaxSubArray = sumSubArray;

    for(index = 1; index < numsSize; index++)
    {
        if(sumSubArray >= 0)
        {
            sumSubArray += nums[index];
        }
        else
        {
            sumSubArray = nums[index];
        }

        if(sumSubArray > tmpMaxSubArray)
        {
            tmpMaxSubArray = sumSubArray;
        }
    }

    return tmpMaxSubArray;
}