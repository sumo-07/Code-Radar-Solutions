#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d &d",&a,&b);
    ((a>0 && b<0) || (a==0 && b==0) ) ? printf("True") : printf("False");
    return 0;
}