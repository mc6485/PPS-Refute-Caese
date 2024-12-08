// Refute Case: Array Index Out of Bounds

#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    printf("Fourth element: %d\n", arr[3]);  // Index out of bounds
    return 0;
}
