#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int time(int h,int m, int s){
    int res =h*3600+m*60 +s;
    return res;
    
    
    
}
int main(){
    int hours,minutes,seconds;
    scanf("%d %d %d", &hours,&minutes,&seconds);
    int r= time(hours,minutes,seconds);
    printf ("Total seconds: %d", r);

}
