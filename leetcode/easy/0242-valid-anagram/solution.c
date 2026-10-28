int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

bool isAnagram(char* s, char* t) {
    int l1 = strlen(s);
    int l2 = strlen(t);

    if (l1 != l2) {
        return false;
    }

    qsort(s, strlen(s), sizeof(char), compare);
    qsort(t, strlen(t), sizeof(char), compare);

    for (int i = 0; i < l1; i++) {
        if (s[i] != t[i]) {
            return false;
        }
    }

    return true;
}