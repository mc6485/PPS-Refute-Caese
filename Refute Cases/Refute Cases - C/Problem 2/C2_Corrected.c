// Corrected Caes: Array index out of bounds

#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int index = 3;
    if (index >= 0 && index < 3) {
        printf("Element at index %d: %d\n", index, arr[index]);
    } else {
        printf("Error: Index %d is out of bounds.\n", index);
    }
    return 0;
}
