#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int flag = 0;
    int t;
    scanf("%d", &t);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]==t){
                printf("%d %d", a[i], a[j]);
                flag = 1;
                return 0;
            }
        }
        
        }
    if(flag == 0){
            printf("-1");
    }
    return 0;
}
