// Last updated: 8/15/2026, 5:33:02 PM
char repeatedCharacter(char* s) {
    int hash[26]={0};
    for(int i=0; s[i]!='\0';i++)
    {
        if(hash[s[i]-'a']==1)
            return s[i];
        hash[s[i]-'a']=1;
    }
    return 0;
}