// Last updated: 8/15/2026, 5:32:44 PM
int countDigits(int num) {
    int originalNum = num;
    int count =0;
    while(num)
    {
        int digit = num%10;
        if(originalNum%digit == 0)
        count++;
        num/=10;

    }
        return count;
}