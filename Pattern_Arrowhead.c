#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
     if(n<=1){
        printf("Shape Not Possible");
        return 0;
    }else
    for(int i=1; i<=(n*2)-1; i++){
        for(int j=1; j<=n; j++){
            if(j==1 || i==j || i+j==2*n){
                printf("*");
            }else
                printf(" ");
        }printf("\n");
    }
    return 0;
}
