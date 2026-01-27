#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num;
    scanf("%d",&num);
   if(num<=1){
       printf("None");
       return 0;
   }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            printf("Composite");
            return 0;
        }
        
    }
    printf("Prime");
        return 0;
    return 0;
}
