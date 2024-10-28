#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a value for a: ");
    scanf("%d", &a);
    printf("Enter a value for b: ");
    scanf("%d", &b);
    if (a >= b) {
        b = a - b;
    } else {
        b = b - a;
    }
    printf("The absolute difference is: %d\n", b);
    return 0;
}
