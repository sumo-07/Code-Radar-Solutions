// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int b = 1<<31;
    printf("%s", (a & b)? "Set" : "Not Set"); 
    return 0;
}