#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STD*/
    int n;
    scanf("%d", &n);
    int a4=n/1000;
    int a3=(n%1000)/100;
    int a2=((n%1000)%100)/10;
    int a1=((n%1000)%100)%10;
    int sum=a1+a2+a3+a4;
    if(n%sum==0){
        printf("%d is a harshad number", n);
    }else{
        printf("%d is not a harshad number", n);
    }
    return 0;
}
