#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scnaf("%f",&r);
    printf("Area: %.2f", 3.14*(r**2));
    return 0;
}