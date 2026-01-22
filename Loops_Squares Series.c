#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
       if(i%3!=0){
            printf("%d ", i*i);
       }
    }
    return 0;
}
