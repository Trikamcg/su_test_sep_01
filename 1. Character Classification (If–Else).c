//1. Character Classification (If–Else)
#include<stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    int b = (int)a;
    printf("You entered: %c\n", a);
    printf("Character representation: %d\n", b);
if(b >= 97 && b <= 122) {
    printf("%c is Alphabet", b);
}else if(b >= 65 && b <= 90) {
    printf("%c is Alphabet", b);
}else if(b >= 48 && b <= 57) {
    printf("%c is Digit", b);
}else if(b >= 58 && b <= 64) {
    printf("%c is special character", b);
}else if(b >= 91 && b <= 96) {
    printf("%c is special character", b);
}else if(b >= 123 && b <= 126) {
    printf("%c is special character", b);
}
return 0;
}




