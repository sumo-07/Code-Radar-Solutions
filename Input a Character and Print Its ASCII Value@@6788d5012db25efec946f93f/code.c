#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    printf("ASCII Value: %d", (int)a);
    return 0;
}