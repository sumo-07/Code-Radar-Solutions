// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%s",(a%4==0)? "Leap Year" : "Not a Leap Year");
    return 0;
}