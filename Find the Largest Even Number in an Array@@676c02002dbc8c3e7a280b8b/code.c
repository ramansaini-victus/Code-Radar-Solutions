#include <stdio.h>

int main() {
    int a[20], n, maxeven = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {
            if (a[i] > maxeven) {
                maxeven = a[i];
            }
        }
    }

    if (maxeven != -1) {
        printf("%d", maxeven);
    } else {
        printf("-1");
    }

    return 0;
}
