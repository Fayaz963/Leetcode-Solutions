// Last updated: 8/15/2026, 5:33:17 PM
int tribonacci(int n) {
   if (n==0|| n==1) return n;
   if(n==2) return 1;
   int p1=1;
   int p2=1;
   int p3=0;
   int c=0;
   for(int i=3;i<=n;i=i+1)
   {c=p1+p2+p3;
   p3=p2;
   p2=p1;
   p1=c;
   }
   return p1;}