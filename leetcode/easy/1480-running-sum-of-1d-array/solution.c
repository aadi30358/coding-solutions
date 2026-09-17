int* runningSum(int* arr, int n, int* returnSize) {
    int *ans=(int*)malloc(n*sizeof(int));
    ans[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]+arr[i];
    }
    *returnSize=n;
    return ans;
}