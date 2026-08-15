// Last updated: 8/15/2026, 5:32:39 PM
int differenceOfSum(int* nums, int numsSize) {
   
       int elesum=0; int digitsum=0 ;
       for(int i=0; i<numsSize; i++)
   {

    elesum=elesum+nums[i];
    int number = nums[i];
    while(number)
    {
        digitsum=digitsum+number%10;
        number/=10;
    }
   }
     return abs(digitsum-elesum);


}