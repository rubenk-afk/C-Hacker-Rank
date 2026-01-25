#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   
    float i;
    float t=0;
    scanf("%f",&i);
   
    if(i>=0)
    {
        if(i<=250000)
        {
            t=0;
            printf("%.02f",t);
        }
        else if(i<=500000)
        {
            t=(i-250000)*0.05;
            printf("%.02f",t);
        }
         else if(i<=1000000)
         {
            t=(250000*0.05)+(i-500000)*0.2;
            printf("%.02f",t);
         }
        else if(i>1000000)
        {
            t=(250000*0.05)+(500000*0.2)+(i-1000000)*0.3;
            printf("%.02f",t);
        }
    }  
    else{
        printf("INVALID");
    }
    return 0;
}
