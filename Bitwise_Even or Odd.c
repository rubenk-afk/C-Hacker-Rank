#include <stdio.h>
   int main() {

    int n;
    scanf("%d",&n);
    n=n&1;
    if(n==1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    
    
    return 0;
}
