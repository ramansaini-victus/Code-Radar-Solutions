#include <stdio.h>

int main() {
    int a[20], n, max1, max2;
    scanf("%d", &n);
    for(int b = 0; b < n; b++) {
        scanf("%d", &a[b]);
    }
    if (a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }
    for(int i = 2; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("%d", max2);
    return 0;
}
