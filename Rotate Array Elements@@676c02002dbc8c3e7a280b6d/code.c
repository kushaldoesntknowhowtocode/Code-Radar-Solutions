#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // Normalize K
    k = k % n;
    int temp[n];
    
    // Perform rotation
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}