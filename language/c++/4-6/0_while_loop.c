#include <stdio.h>
int main(){

int Number,Multiple;
int To_multiply;

printf("Enter you number : ");   // while loop use to check if the stament is true or false if the statment is false it dont execute
scanf("%d",&Number);

// printf(" till where you want table  :");
//scanf("%d",&To_multiply);

while(To_multiply<11){
if(To_multiply>0){
Multiple=Number*To_multiply;

printf("%d x %d = %d\n",Number,To_multiply,Multiple);
To_multiply++;

}
//else{
//printf("Sorry Icant understand");
//}
}
return 0;
}