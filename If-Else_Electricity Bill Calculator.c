#include <stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    float amount;
    int flag=0;
    scanf("%d",&n);
    if(n>300)
    {
        int c=n-300;
        amount= 1900 + c*10;
    }
    else if(n>100 && n<=300 )
    {
        int b=n-100;
        amount=b*7 + 500;
        if (amount<=1200.00)
        {
            amount=amount - amount*0.1;
        }   
    }
    else if(n<=100 && n>=0)
    {
        amount=n*5;
        amount=amount - (amount*0.1);
    }
    else
    {
        printf("Invalid Input!");
        flag=1;
    }
    if(flag==0)
    {
    printf("The electricity bill is: %.02f.",amount);
    }
    return 0;
}
