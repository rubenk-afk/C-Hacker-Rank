#include <stdio.h>

int main() {

    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    
    printf("%d",n|(1<<i));
    
    return 0;
}
