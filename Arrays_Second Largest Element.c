#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
    int max,i,second;
    second=0;
    max=arr[0];
    for(int i=0;i<n;++i)
    {
        if(max<arr[i])
            max=arr[i];
    }
    for(i=0;i<n;++i)
    {
        if(max>arr[i])
        { 
            if(second==0 || arr[i]>second)
                second=arr[i];
        }
    }
   
    if(second==0)
        return -1;
    else
        return second;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
