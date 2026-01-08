#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h,m,converted_hour;
    scanf("%d %d",&h,&m);
    char*period;
    if(h==0)
    {converted_hour=12;
        period="AM";
    }
    else if(h<12)
    {
        converted_hour=h;
        period="AM";
    }
    else if(h==12){
        converted_hour=12;
        period="PM";
    }
    else{
        converted_hour=h-12;
        period="PM";
    }
    printf("%d:%02d %s\n",converted_hour,m,period);
    return 0;
}
