#include <stdio.h>
int main(){

    float num1,num2,num3,num4;
    printf("\nEnter an numeric value Other wise this program crashes\n For help type 1000 in any of these\n");

    printf("\nEnter number 1 :");
    scanf("%f",&num1);
     if(num1==1000)
    printf("Sorry its isnt available yet check your connection ");
    else
    
    printf("\nEnter number 2 :");
    scanf("%f",&num2);
     if(num2==1000)
    printf("Sorry its isnt available yet! Visit any one site\n For site information type 1000 again!\n Thankyou :) :) ");
    else

    printf("\nEnter number 3 :");
    scanf("%f",&num3);
     if(num3==1000) 
    printf("Sorry its isnt available yet :( :( ");
    else

    printf("\nEnter number 4 :");
    scanf("%f",&num4);
    if(num4==1000)
    printf("Sorry its isnt available yet It will be available after subscribtion ");
    else

//Here we all number which we need to execute but if A person write an varibale so 
       
   try: 
   if(0==num1 || 0==num2 ||0==num3 ||0==num4){
       printf("\n\nsorry! This program cant handle 0 and variable(i.e a,b,c,d...) :) :) :)\n For solution Type 1000 in Any column\n   ");
   }


     //else if (0>num1,num2,num3|| 0>num2,num3,num4 ||0>num3,num4,num1 || 0>num4,num1,num2)
     //printf("\nsorry");

    else if(num1>num2 && num1>num3 && num1>num4){
        printf("\n%f is greater than %f,%f ,%f",num1,num2,num3,num4);}

    else if(num2>num1 && num2>num3 && num2>num4){
        printf("\n%f is greater than %f ,%f ,%f",num2,num1,num3,num4);}
        
    else  if(num3>num1 && num3>num2 && num3>num4){
        printf("\n%f is greater than %f ,%f ,%f",num3,num1,num2,num4);}
    
    
    else  if(num4>num1 && num4>num2 && num4>num1){
        printf("\n%f is greater than %f,%f ,%f",num4,num1,num2,num3);}

    else if(num1==num2 && num2==num3 && num3==num4){
        printf("\nAll of your numbers are equal i.e %f=%f=%f=%f",num1,num2,num3,num4);
   except:
   printf("\nyo");
    }    
        

           
}