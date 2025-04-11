int is_sorted(int *a, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            return 0;
        }
    }
    else return 1; 
}
int main() {
    int a[20], n;
    scanf("%d", &n);
    for(int b = 0; b < n; b++) {
        scanf("%d", &a[b]);  
    }

    if (is_sorted(a,n))
        printf("Sorted\n");
    else {
        printf("Not sorted\n");
        
    }

    return 0;
}
