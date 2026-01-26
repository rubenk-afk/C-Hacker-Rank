#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,i;
    scanf("%d %d",&a,&b);
    
    if(a>b)
        c=a;
    else
        c=b;
    for(i=c;i>=1;--i){
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==c+1)
        printf("%d",c);
    else
    printf("%d",i);
    return 0;
}
