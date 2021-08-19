#include <stdio.h>
int main(){

int a;
for(a=0;a<10;a++){
printf("%d\n",a);
if(a==6){
    break;
}
}

return 0;
}