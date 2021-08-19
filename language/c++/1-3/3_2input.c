#include <stdio.h>
int main(){
float radius;
printf("Enter the radius of the circle : ");
scanf("%f", &radius);
printf("The area of the circle with 22/7 is %f \n ",(22*radius*radius)/7);//\n is used to break the lint
printf("The area of the circle with 3.14 is %f ", 22/7*radius*radius);
return 0;

}