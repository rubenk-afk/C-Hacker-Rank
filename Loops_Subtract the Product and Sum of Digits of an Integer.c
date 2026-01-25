#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, digits;
    scanf("%d", &n);
    int num=n;
    int sum=0;
    int mul=1;
    
    for(int i=1; num!=0; i++){
        digits=num%10;
        sum+=digits;
        mul*=digits;
        num/=10;
    }
    printf("%d", mul-sum);
    return 0;
}
