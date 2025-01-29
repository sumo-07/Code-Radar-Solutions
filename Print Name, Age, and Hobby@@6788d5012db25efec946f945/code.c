#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    char b[20], c[20];
    scanf("%s %d\n%s",&b,&a,&c);
    printf("Name: %s\nAge: %d\nHobby: %s",b,a,c);
    return 0;
}