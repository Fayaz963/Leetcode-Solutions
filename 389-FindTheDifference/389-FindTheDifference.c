// Last updated: 8/15/2026, 5:33:27 PM
char findTheDifference(char* s, char* t) {
    char res=0;
for (int i =0; s[i]!='\0';i++)
  res=res^s[i];
    for(int i=0;t[i]!='\0';i++)
        res=res^t[i];
    return res;
}