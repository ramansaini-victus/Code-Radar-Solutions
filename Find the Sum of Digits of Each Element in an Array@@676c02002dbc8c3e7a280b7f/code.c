#include <stdio.h>

int main() {
    int a[20], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int digit_sum = 0;
        if (num < 0) num = -num;
        while (num > 0) {
            digit_sum += num % 10;
            num /= 10;
        }

        printf(" %d ",, digit_sum);
    }

    return 0;
}
