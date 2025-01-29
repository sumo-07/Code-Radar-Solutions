#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\nOctal: %o",toupper(a),a);
    return 0;
}