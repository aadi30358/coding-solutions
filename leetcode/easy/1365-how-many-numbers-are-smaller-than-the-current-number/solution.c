/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* smallerNumbersThanCurrent(int* arr, int n, int* returnSize) {
    int *ans = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int lc = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] > arr[j]) {
                lc++;
            }
        }

        ans[i] = lc;
    }

    *returnSize = n;
    return ans;
}