#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d", &a);
    for (int i = 2; i <= a;i += 2){
        printf("%d ",i);
    }
    return 0;
}

