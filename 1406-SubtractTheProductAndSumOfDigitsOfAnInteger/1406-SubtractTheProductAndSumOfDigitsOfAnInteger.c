// Last updated: 8/15/2026, 5:33:14 PM
int subtractProductAndSum(int n) {
    int product;
    int sum; int digit;
    sum=0;
    product=1;
    while(n!=0)
    {
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    product=product*digit;
    }
return product-sum;
}