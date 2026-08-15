// Last updated: 8/15/2026, 5:32:20 PM
bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    
int col1 = coordinate1[0]-'a'+1;
    int row1  = coordinate1[1]-'0';

   int col2 = coordinate2[0]-'a'+1;
    int row2  = coordinate2[1]-'0';

    return (row1+col1)%2==(row2+col2)%2;
}

