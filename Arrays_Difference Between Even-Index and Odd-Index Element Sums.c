#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    long long even=0;
    long long odd=0;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
           even+=a[i];
        }else{
           odd+=a[i];
        }
        
    }
    long long sum=even-odd;
    printf("%lld",sum);
    return 0;
}
