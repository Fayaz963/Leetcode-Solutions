// Last updated: 8/15/2026, 5:32:21 PM
int sumOfTheDigitsOfHarshadNumber(int x) {
    int digitSum=0;
    int temp=x;
    while(temp)
    {
        digitSum += temp % 10;
        temp /= 10;

    }
        if(x % digitSum == 0)
        return digitSum;
        return -1;
}