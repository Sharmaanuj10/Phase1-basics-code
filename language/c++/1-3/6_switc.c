#include <stdio.h>
int main(){

    int a;
    printf("whats you age : ");
    scanf("%d",&a);
    switch(a){
        case 3:
         printf("you are 3");
         break;
         case 2:
         printf("you type 2");
         break;
         default:
         printf("You type non");
         break;
    }

    return 0;
}