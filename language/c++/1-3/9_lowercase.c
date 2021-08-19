#include<stdio.h>
int main(){
    char ti;
    printf("Enter the digit : ");
    scanf("%c",&ti);
    //From 97 to 122 the variable are lower case

    if(ti<=122 && ti>=97)
    printf("Lowercase");
    
    else
    printf("Uppercase");


    return 0;
}
