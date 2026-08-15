// Last updated: 8/15/2026, 5:32:42 PM
char* categorizeBox(int length, int width, int height, int mass) {
long long volume =(long long )length*width*height;
int isBulky=(length>=10000||width>=10000||height>=10000||volume>=1000000000);
int isHeavy=(mass>=100);
if(isBulky&&isHeavy){
 return "Both";
}else if (isBulky){
    return "Bulky";

}else if (isHeavy){
    return "Heavy";

}else {
    return "Neither";





}
}