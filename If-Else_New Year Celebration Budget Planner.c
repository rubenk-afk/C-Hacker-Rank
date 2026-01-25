#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int budget, numguest, foodperguest, decoration, musiccost, extraexpence;
    scanf("%d", &budget);
    scanf("%d", &numguest);
    scanf("%d", &foodperguest);
    scanf("%d", &decoration);
    scanf("%d", &musiccost);
    scanf("%d", &extraexpence);
    
    int foodcost = numguest*foodperguest;
    int cost = (foodcost+decoration+musiccost+extraexpence);
    if(cost<=budget){
        if(numguest>5 || numguest<50){
            if(decoration < budget * 0.30 || foodcost < budget*0.50){
                if(numguest>25){
                    printf("Celebration Approved");
                }else{
                    printf("Celebration Approved");
                }
            }
        }
    }else{
        printf("Celebration Denied");
    }
    return 0;
}
