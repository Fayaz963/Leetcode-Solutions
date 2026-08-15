// Last updated: 8/15/2026, 5:32:18 PM
char* triangleType(int* nums, int numsSize) {
    int a =nums[0],b=nums[1],c=nums[2];
    
    if(a+b<=c||a+c<=b||b+c<=a)
        return "none";
    if(a==b&&b==c)
        return "equilateral";
    if(a==b||b==c||a==c)
        return "isosceles";
    return "scalene";
}