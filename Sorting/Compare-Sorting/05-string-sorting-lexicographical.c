// Sort Strings of Array in Lexicographical Order with C
#include <stdio.h>
#include <string.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int cmp(char a[], char b[]) {
    int len_a = strlen(a), len_b = strlen(b);
    for (int i = 0; i < min(len_a, len_b); i++) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return 0;
    }
    return len_a > len_b;
}

void insertion_sort(char a[][100], int len) {
    int i, j, n = len;
    for (i = 0; i < n; i++) {
        for (j = i-1; j >= 0; j--) {
            if (cmp(a[j], a[j+1])) {
                char tmp[100];
                strcpy(tmp, a[j+1]);
                strcpy(a[j+1], a[j]);
                strcpy(a[j], tmp);
            }
            else break;
        }
    }
}

int main() {
    char a[][100] = {"ab", "aaab", "aa", "bac","acb"};
    int len = 5;

    for (int i = 0; i < len; i++) {
        printf("%s\n", a[i]);
    }
    printf("\n");

    insertion_sort(a, len);

    for (int i = 0; i < len; i++) {
        printf("%s\n", a[i]);
    }
}
// by Shihab Mahamud (github.com/shihab4t)
