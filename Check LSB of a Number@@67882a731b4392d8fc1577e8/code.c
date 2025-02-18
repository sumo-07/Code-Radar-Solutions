// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    printf("%s", ((a & 1)==1)? "Set" : "Not Set");   
    return 0;
}