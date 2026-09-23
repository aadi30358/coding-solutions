bool isPalindrome(char* s) {
    int l = strlen(s);
    int k = 0;
    char *arr = malloc(l * sizeof(char));
    for(int i = 0; i < l; i++) {
        if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= '0' && s[i] <= '9')) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
            arr[k] = s[i];
            k=k+1;
        }
    }
    int left = 0;
    int right = k - 1;
    while(left < right) {
        if(arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}