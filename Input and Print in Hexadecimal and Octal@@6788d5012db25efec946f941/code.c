#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    b=a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\nOctal: %o",toupper(b),a);
    return 0;
}