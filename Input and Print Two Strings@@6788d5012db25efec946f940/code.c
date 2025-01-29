#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char[30] a,b;
    scanf("%s %s",&a,&b);
    printf("You entered: %s and %s", a,b);
    return 0;
}