//9. Repeated Input Until Zero (Do–While Loop)
#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);
        if (num != 0) {
            printf("You entered: %d\n", num);
        }
    } while (num != 0);
    printf("Exiting...\n");
    return 0;
}
