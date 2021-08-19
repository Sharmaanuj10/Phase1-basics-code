#include <stdio.h>
int main(){

    int num;
    printf("Hi, Add the number: ");
    scanf("%d",&num);

    while(num<10){
    printf("%d\n",num);
    num++;}

    return 0;
}