#include <stdio.h>
void isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int arr[20], n, count = 0;
    scanf("%d", &n);
    for (int b = 0; b < n; b++) {
        scanf("%d", &arr[b]);
    }
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    printf(" %d\n", count);

    return 0;
}
