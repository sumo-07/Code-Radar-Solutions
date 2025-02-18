// Your code here...
#include <stdio.h>
int main(){
    char a;
scnaf("%c",&a);
if (a>='A' || a<='Z'){
    printf("s","Uppercase");
}
else if (a>='A' || a<='Z'){
    printf("%s","Lowercase");
}
else{
    printf("Not an alphabet");
}
return 0;
}