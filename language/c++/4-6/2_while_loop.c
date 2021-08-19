#include <stdio.h>
int main(){

int a,b;

printf("Enter first number: ");
scanf("%d",&a);

printf("Enter second number: ");
scanf("%d",&b);

if(b>a){
while(b>a){
if(b>a){
printf(" %d\n",a);
}
a++;}}



//code executed below is explained and similar is upper code
//  let now set acondition that a>b 
//Now while loop exist till a>b so we have to decrement a so it reaches b 
//it work until a<b means after decrement  and decrement a finally reaches b
// so our condition is false when b>a in this case and code stop working




else if(a>b){
while(a>b){
if(a>b){
printf(" %d\n",a);
}
a--;}}
return 0;
}