#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i;
    scanf("%d\n%d", &n,&i);
    n=n&(n-1);
    printf("%d", n);
    return 0;
}
