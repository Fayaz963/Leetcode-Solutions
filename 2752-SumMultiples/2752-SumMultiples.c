// Last updated: 8/15/2026, 5:32:24 PM
int sumOfMultiples(int n) {
    int sum = 0;
    for (int i =1; i<=n; i++)
    if(i%3==0||i%5==0||i%7==0)
    sum=sum+i;
    return sum;
}