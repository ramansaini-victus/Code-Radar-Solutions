#include <stdio.h>

int main() {
    int arr[20], n, evencount = 0, oddcount = 0;
    scanf("%d", &n);

    for(int b = 0; b < n; b++) {
        printf("Enter element %d: ", b + 1);
        scanf("%d", &arr[b]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
    }

    printf("%d %d", evencount, oddcount);

    return 0;
}
