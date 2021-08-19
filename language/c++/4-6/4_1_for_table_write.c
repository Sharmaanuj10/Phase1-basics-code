#include <stdio.h>
int main(){

    int a,b=1,c,d;
    printf("Enter the number : ");
    scanf("%d",&a);

    printf("Till what number you wnat table : ");
    scanf("%d",&c);

//Basic input we get from above
//My format of table qwriting is "a*b=d"
// when the b increment to c the code stop
                                                       
for(b;b<c+1;b++)

printf("%d X %d = %d \n ",a,b,a*b);
 //Here i use for loop to increment the value of until it reaches c+1
//Then put value in printf statment as follow
 //want to check what happen if i dont write c+1 ?

    return 0;
}