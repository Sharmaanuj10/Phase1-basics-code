#include <stdio.h>
int main(){

int physics,math,sst,total;
float percent;

printf("\n\nIf need help type 1000\n");
printf("\nEnter physics marks: ");
scanf("%d",&physics);

if(physics==1000){
printf("\n(i) According to rule user can only enter digit to 100 only.\n\n"
"(ii) If user enter digit greater than 100 the error 'Please enter valid number'shown to you.\n\n"
"(iii) To avoid the error enter the digit smaller than 100 or equal to 100.\n\n"
"(iv) Also according to rule if you enter 1000 in any coloum you will always see this page.\n\n"
".........................................Thankyou................................................."
);}

else{
printf("\nEnter math marks: ");
scanf("%d",&math);


printf("\nEnter sst marks: ");
scanf("%d",&sst);

total=physics+math+sst;
percent=total*1/3;

if(physics==1000 || math==1000 ||sst==1000){
printf("(i) According to rule user can only enter digit to 100 only.\n\n"
"(ii) If user enter digit greater than 100 the error 'Please enter valid number'shown to you.\n\n"
"(iii) To avoid the error enter the digit smaller than 100 or equal to 100\n\n"
"(iv) Also according to rule if you enter 1000 in any coloum you will always see this page\n"
"..................................Thankyou................................"
);}

else if(physics>=101 || math>=101 || sst>=101 )
printf("\n\nPlease enter valid number\n\n if need help type 1000");
else{

if(percent<40 || physics==33 || sst==33 || math==33){
printf("\nYou are Fail as your percentage are %f and your marks are as follow\n"
"\nPhysics=%d\n Math=%d\n sst=%d\n",percent,physics,math,sst);}

else{
printf("\nCongratulation! you passed by %f and you marks are as follow :) :) :)\n"
"\nPhysics=%d\n Math=%d\n sst=%d\n" , percent,physics,math,sst);
}}}

return 0;
}