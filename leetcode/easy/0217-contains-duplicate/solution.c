int compare(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
bool containsDuplicate(int* arr, int n) {
    qsort(arr,n,sizeof(int),compare);
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}