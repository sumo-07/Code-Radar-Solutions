#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    printf("%s", ((a>0 && b<0) || (a==0 && b==0) ) ? "True" : "False");
    return 0;
}