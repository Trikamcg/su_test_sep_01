//7. Armstrong Number (While Loop)
#include<stdio.h>
int main() {
    int n, originalNumber, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalNumber = n;
    while(n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }
    if(originalNumber == result) {
        printf("%d is an Armstrong number.\n", originalNumber);
    }else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }
    return 0;
}