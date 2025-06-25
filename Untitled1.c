#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello world";
    char ch;
    int i, j;

    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &ch);

    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("Ket qua: %s\n", str);

    return 0;
}
