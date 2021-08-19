#include <stdio.h>
int main(){

    int a,b=1,c;
    printf("Ener the number: ");
    scanf("%d",&a);

    for(b;b<11;b++){
        printf("%d x %d= %d\n",a,b,b*a);
    }

    return 0;
}