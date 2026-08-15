// Last updated: 8/15/2026, 5:32:37 PM
int alternateDigitSum(int n) {
    int reversed, sum=0, a=1;
    while(n!=0){
        int digit =n%10;
        reversed = reversed * 10 + digit;
        n=n/10;

    }
    while (reversed!=0){
        int digit1=reversed%10;
        sum+=a*digit1;
        a=a*-1;
        reversed=reversed/10;
    }
    return sum;
}