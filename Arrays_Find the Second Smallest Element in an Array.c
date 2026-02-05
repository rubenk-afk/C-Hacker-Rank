#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,min;
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    min=a[0];
    
    for(int i=0;i<n;++i)
    {   
       if(min>a[i])
        { 
            min=a[i];
        }     
    }
    
    int second=0;
    
    
    for(int i=0;i<n;++i)
    {
        if(a[i]>min)
        {
           if(second==0 || a[i]<second)
           { second=a[i];
               }
        }
    }
    
    if(second==0)
        printf("-1");
    else
        printf("%d",second);
   
    return 0;
}
