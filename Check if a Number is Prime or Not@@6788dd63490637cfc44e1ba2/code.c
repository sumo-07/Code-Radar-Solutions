// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c = 0;
    for (int i = 2; i*i<=a;i++){
        if (a%i==0){
            c++;
            break
        }
    }
    if (c==0){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}