#include <stdio.h>
int main(){

    int a,b,c;

    printf("enter a digit : ");
    scanf("%d",&a);

    while (a<10){
        printf("%d\t\n",a);
        a++;
    }

    return 0;
}