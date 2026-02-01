#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int count = 0;
    if (m == n){
        for (int i = 0; i < m; i++){
            if (a[i] == b[i]){
                ++count;
            }
        }

        if (count == m){
            printf("Equal");
        }else{
            printf("Not Equal");
        }
    }else{
        printf("Not Equal");
    }

    return 0;
}
