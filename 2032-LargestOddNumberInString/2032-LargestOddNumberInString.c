// Last updated: 8/15/2026, 5:33:05 PM
char* largestOddNumber(char* num) {
    int len=strlen(num);
    for(int i=len-1;i>=0;i--){

if(num[i]%2!=0){
    num[i+1]='\0';
    return num;
}



    }

    return"";
}

