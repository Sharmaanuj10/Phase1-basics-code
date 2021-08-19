#include <stdio.h>
int main(){

float tax;
float income;
printf("Enter you income : ");
scanf("%f",&income);


if(income>=250000 && income<=500000){
tax = tax + 0.2 * (income-250000);}

if(income>=500000 && income<=1000000){
tax = tax + 0.5 * (income-500000);}

if(income>=1000000){
tax=tax + 0.10 * (income-1000000);
}

printf("You need to pay %f Rupees income tax",tax);

return 0;
 }