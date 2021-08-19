#include <stdio.h>
int main(){

    int year;
    printf("Enter you year : ");
    scanf("%d",&year);

    if(year%4==0)
    printf("%d an leap year",year);
    else{
    printf("%d not an leap year",year);
    }
    return 0;
}