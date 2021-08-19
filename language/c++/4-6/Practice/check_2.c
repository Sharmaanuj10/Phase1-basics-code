#include <stdio.h>
int main(){

    int h,m,s;
    printf("Enter Time in HH:MM:SS format ");
    scanf("%d %d %d",&h,&m,&s);
    
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {

                // clrscr();
                printf("\n\n\t\t\t%d:%d:%d",h,m,s);
                if(h<12)
                {
                    printf(" AM\n");
                }
                else
                {
                    printf(" PM\n");
                }
             break;
             break;
             break;

            }
            s=0;
        }
        m=0;
        
    }
     h=0;
    goto start;
 getc;
           return 0;
}