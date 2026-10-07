void rotate(int* arr, int n, int k) {
    int *ans = malloc(n * sizeof(int));

    k = k % n;

    for (int i = 0; i < n; i++) {
        ans[(i + k) % n] = arr[i];
        ans[(i+k)%n]=arr[i];
        // ans[i] = arr[(i + k) % n];  // left rotation
    }

    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}