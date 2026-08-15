// Last updated: 8/15/2026, 5:32:23 PM
char* maximumOddBinaryNumber(char* s) {
    int i, count=0;
    for(i=0;i<strlen(s);i++)
    if(s[i]=='1')
    count++;
    for(i=0;i<strlen(s);i++)
    s[i]='1';
    for(i=count-1;i<strlen(s);i++)
    s[i]='0';
    s[strlen(s)-1]='1';
    return s;
     
}