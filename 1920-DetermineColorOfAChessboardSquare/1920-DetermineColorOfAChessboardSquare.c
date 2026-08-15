// Last updated: 8/15/2026, 5:33:09 PM
bool squareIsWhite(char* coordinates) {
    int x = coordinates[0]-'a';
    int y = coordinates [1]-'1';
    int sum = x+y;
    return (sum%2==0)?0:1;
}