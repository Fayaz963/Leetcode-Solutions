// Last updated: 8/15/2026, 5:33:31 PM
int singleNumber(int* nums, int numsSize) {
    int res =0;
    for(int i=0; i<numsSize;i++)
    res ^=nums[i];
    return res;

}