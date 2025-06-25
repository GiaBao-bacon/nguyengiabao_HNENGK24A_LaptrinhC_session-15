#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char chars[100];
    int count[100];
    int i, j, len, found;

    printf("Moi ban nhap chuoi:");
    gets(str);
    len = strlen(str);
    int k = 0;

    for (i = 0; i < len; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (chars[j] == str[i]) {
                count[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            chars[k] = str[i];
            count[k] = 1;
            k++;
        }
    }

    for (i = 0; i < k; i++) {
        printf("%c: %d\n", chars[i], count[i]);
    }

    return 0;
}

