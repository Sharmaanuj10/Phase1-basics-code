#include <stdio.h>
int main(){
int a;
printf("For help Type 1000\n");

printf("Enter your age : ");

scanf("%d",&a);

if(a>=18 && a<=81 ){
printf("You can vote");
}

else if(a>80 && a<=109)
{
printf("you can vote at risk coming to health");

}

else if(a==1000){
printf("\n(i)You can type your age curent age\n\n"
"(ii)If it is a numeric value you can know that you are able to vote or not\n\n"
"(iii)Thanks for using this applicatuion to check your validity :) :) :)\n\n"
"..................................Thankyou..................................");}

else if(a!=1000 && a>=110){
printf("you can give vote if you are alive");
}

else if(a==0){
printf("This is not a numeric value for age");
}

else if(a<=5){
printf("You are baby don't think about voting"/* 😀😊😘😘*/);
}

else{
printf("You are not allowed to vote, But you can vote after %d",18-a);
}
//return 0;

}
