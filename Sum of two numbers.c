#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1, num2, sum;
    scanf("%d" ,&num1);
    scanf("%d" ,&num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    return 0;
}
