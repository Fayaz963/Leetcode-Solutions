// Last updated: 8/15/2026, 5:32:58 PM
int commonFactors(int a, int b) {
    int count = 0;
    for(int i=1;i<=a && i<=b;i++)
 if (a%i==0 && b%i==0)
   ++count;
   return count;
}