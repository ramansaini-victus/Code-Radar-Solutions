#include <stdio.h>

void sorted(int *a, int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int is_sorted = 1;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            is_sorted = 0;
            break;
        }
    }

    if(is_sorted)
        printf("Sorted\n");
    else
        printf("Not sorted\n");
}

int main() {
    int a[20], n;
    scanf("%d", &n);
    for(int b = 0; b < n; b++) {
        scanf("%d", &a[b]);  
    }

    sorted(a, n);  

    return 0;
}
