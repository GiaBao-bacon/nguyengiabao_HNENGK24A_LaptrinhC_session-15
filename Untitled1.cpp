#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai chuoi: %d\n", strlen(str));
    
    return 0;
}
