/*
Problem 18:
Implement strcat(), stracpy(), strcmp() and strlen() recursively.
Input:
test on your own
Output:
test on your own
*/

#include <stdio.h>
#include <string.h>


// strcat() function iteratively
void mystrcat(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    int i, j;
    for (i = len_a, j = 0; j < len_b; i++, j++) {
        a[i] = b[j];
    }
}
// strcat() function recursively
void mystrcat_re(char a[], char b[], int i, int j, int len_b) {
    if (j == len_b) return;
    a[i] = b[j];
    mystrcat_re(a, b, i+1, j+1, len_b);
}



// strcpy() function iteratively
void mystrcpy(char b[], char a[]) {
    int len = strlen(a), i;
    for (i = 0; i < len; i++) {
        b[i] = a[i];
    }
}
// strcpy() function recursively
void mystrcpy_re(char b[], char a[], int i) {
    if (i == 0) return;
    b[i-1] = a[i-1];
    mystrcpy_re(b, a, i-1);
}



// strcmp() function iteratively
int mystrcmp(char a[], char b[]) {
    int len_a = strlen(a), len_b = strlen(b);
    int i;
    if (len_a != len_b) {
        if (len_a > len_b) {
            return (int)a[len_b];
        } else {
            return -((int)b[len_a]);
        }
    } else {
        for (i = 0; i < len_a; i++) {
            if (a[i] != b[i]) {
                return (a[i] - b[i]);
            }
        }
    }
    return 0;
}
// strcmp() function recursively
int mystrcmp_re(char a[], char b[], int len_a, int len_b, int i) {
    if (i == len_a) {
        return 0;
    }

    if (len_a != len_b) {
        if (len_a > len_b) {
            return (int)a[len_b];
        } else {
            return -((int)b[len_a]);
        }
    } else {
        if (a[i] != b[i]) {
            return (a[i] - b[i]);
        }
        return mystrcmp_re(a, b, len_a, len_b, i+1);
    }
}



// strlen() function iteratively
int mystrlen(char a[]) {
    int i;
    for (i = 0; a[i] != '\0'; i++);
    return i;
}
// strlen() function recursively
int mystrlen_re(char a[], int i) {
    if (a[i] == '\0') {
        return i;
    }
    mystrlen_re(a, i+1);
}

int main() {
    char a[100] = "Shihab ";
    char b[] = "Mahamud";

    // mystrcat(a, b);
    mystrcat_re(a, b, strlen(a), 0, strlen(b));

    // printf("%s\n", a);



    char a2[100] = "strcpy() with Recursively";
    char b2[100];

    // strcpy(b2, a2);
    // mystrcpy(b2, a2);
    mystrcpy_re(b2, a2, strlen(a2));

    // printf("%s\n", b2);



    char a3[100] = "Shihab Mahamud";
    char b3[100] = "Shihab Mahamud";

    // int val = mystrcmp(a3, b3);
    int val = mystrcmp_re(a3, b3, strlen(a3), strlen(b3), 0);
    // printf("%d\n", val);



    char a4[100] = "Shihab";
    // int len = mystrlen(a4);
    int len = mystrlen_re(a4, 0);
    printf("%d\n", len);
}