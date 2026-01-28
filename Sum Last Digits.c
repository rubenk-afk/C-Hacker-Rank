#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int func (int p, int q){
    int res = p%10+q%10;
    return res;
}
int main() {
    int num1, num2;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d %d", &num1, &num2);
    int r= func( num1,  num2);
    printf("The sum of last digits is: %d", r );
    
    
    return 0;
}
