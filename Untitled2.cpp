#include <stdio.h>

int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    
    printf("Chuoi vua nhap: %s", str);
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    
    printf("Chuoi sau khi doi: %s", str);
    
    return 0;
}
