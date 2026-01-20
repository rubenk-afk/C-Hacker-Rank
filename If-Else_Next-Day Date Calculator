#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int d,m,y;
    scanf("%d %d %d", &d,&m,&y);
    if(((y%400==0 || (y%4==0 && y%100!=0)) && d==29 && m==2)){
        printf("01-%02d-%d",m+1,y);
    }else if(m==12 && d==31){
        printf("01-01-%04d",y+1);
    }else if (m==2 && d==28 && !(y%400==0 || (y%4==0 && y%100!=0))) {
        printf("01-%02d-%04d", m+1, y);
    }else if ((m==1||m==3||m==5||m==7||
              m==8||m==10||m==12) && d==31) {
        printf("01-%02d-%04d", m+1, y);
    }else if ((m==4||m==6||m==9||m==11) && d==30) {
        printf("01-%02d-%04d", m+1, y);
    } else {
        printf("%02d-%02d-%04d", d+1, m, y);
    }
    return 0;
}
