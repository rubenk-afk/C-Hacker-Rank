#include <stdio.h>

int main()
{
    int a,b,c,d,n;
    
    scanf("%d", &a);  
    
    if (a == 1) {
        printf("Player chooses the Left path.\n");
        scanf("%d", &b);  
        if (b == 1) {
            printf("Poor choice, Game Over!\n");
        } else {
            printf("Player found a bridge.\n");
            scanf("%d", &c);  
            if (c == 1) {
                printf("Player crosses the bridge safely.\n");
                scanf("%d", &d);  
                if (d == 1) {
                    printf("All that glitters is not gold, Game Over!\n");
                } else if (d == 2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                } else {
                    printf("Congratulations!! You won the treasure.\n");
                }
            } else {
                printf("Poor luck, Game Over!\n");
            }
        }
    } else if (a == 2) {
        printf("Player chooses the Middle path.\n");
        scanf("%d", &n);  
        int p = n / 100;
        int q = (n / 10) % 10;
        int r = n % 10;
        if (q == 4 * r && p == q - 3 && p + q + r == 15) {
            printf("Player solved the puzzle.\n");
            scanf("%d", &d);  
            if (d == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (d == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else {
                printf("Congratulations!! You won the treasure.\n");
            }
        } else {
            printf("Foolish player, Game Over!\n");
        }
    } else if (a == 3) {
        printf("Player chooses the Right path.\n");
        scanf("%d", &n);  
        if (n == 30) {
            printf("Player solved the puzzle.\n");
            scanf("%d", &d);  
            if (d == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            } else if (d == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            } else {
                printf("Congratulations!! You won the treasure.\n");
            }
        } else {
            printf("Foolish player, Game Over!\n");
        }
    }
    
    return 0;
}
