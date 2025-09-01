// 2. Electricity Bill (Nested If)
#include<stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if(units <= 50) {
        bill = units * 2 + 100;
    }else if(units <= 100) {
        bill = units * 3 + 100;
    }else if(units <= 200) {
        bill = units * 4 + 100;
    }else if(units <= 300) {
        bill = units * 5 + 100;
    }else if(units <= 500) {
        bill = units * 6 + 100;
    }else {
        bill = units * 8 + 100;
    }
    printf("Electricity Bill: %.2f\n", bill);
    return 0;
}