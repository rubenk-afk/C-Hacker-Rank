#include <stdio.h>

void reverseArray(int arr[], int n) {
    // Implement the function to reverse the array in-place
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
