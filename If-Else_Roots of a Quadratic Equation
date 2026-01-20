#include <stdio.h>

int main() {

int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    
    if(((b*b)-(4.00*a*c))>0)
    {
     float x1= (-b + sqrt((b*b)-(4.00*a*c)) )/(2.00*a);
     float x2= (-b - sqrt((b*b)-(4.00*a*c)) )/(2.00*a);
        
        printf("Roots: %.2f, %.2f\n",x1,x2);
        printf("Type: Real and Distinct");
    }
    
    else if(((b*b)-(4.00*a*c))==0)
    {
        float x1=-b/(2.00*a);
        printf("Roots: %.2f, %.2f\n",x1,x1);
        printf("Type: Real and Equal");
    }
    
    else
    { 
        float d=-b/(2.00*a);
        float i=(sqrt((4.00*a*c)-pow(b,2)))/(2.00*a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",d,i,d,i);
        printf("Type: Complex");
    }    return 0;
}
