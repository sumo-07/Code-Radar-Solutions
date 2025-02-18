// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    unsigned int c = 1u << b;
    printf("%d",((unsigned int)a & c)? 1:0);
}