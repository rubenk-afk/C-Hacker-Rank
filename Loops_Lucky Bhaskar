#include <stdio.h>

int main() {
    int amount,n;
    scanf("%d %d", &amount,&n);
    double current_amount,min_amount;
    int flag=0;
    current_amount=amount;
    min_amount=amount;
    for(int i=1; i<=n; ++i){
        if(i%6==0){
            current_amount=current_amount+(current_amount*0.7);
            i+=6;
        }
        else if(i%2==0){
            current_amount=current_amount-(current_amount/8);
        }
        else if(i%3==0){
            current_amount=current_amount-(current_amount/5);
        }
        else{
            current_amount=current_amount-(current_amount*0.1);
        }
        if(current_amount<min_amount){
            min_amount=current_amount;  
        }
        if(current_amount<=(amount*0.4) && i!=n){
            printf("Stopped early after %d days: %.2f\n", i,current_amount);
            flag=1;
            break;
        }
    }
        if(flag==0){
            printf("After %d days: %.2f\n", n,current_amount);
        }
          printf("Minimum amount held by Bhaskar: %.2f\n", min_amount);
        if(current_amount>(amount*0.7)){
            printf("Lucky Bhaskar");
    }
        else {
            printf("Better Luck Next Time!");
        }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
