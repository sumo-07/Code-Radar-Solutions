// Your code here...
#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch (a){
        case 'R':
        printf("%s","Stop");
        break;
        case 'G':
        printf("%s","Go");
        break;
        case 'Y':
        printf("%s","Slow Down");
        break;
        default:
        printf("%s","Invalid input");
    }
    
    return 0;
}