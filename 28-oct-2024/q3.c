#include <stdio.h>

int main() {
    int zero_count = 0;
    int minus_sum = 0;
    int plus_sum = 0;
    int y;
    printf("Enter a value for y: ");
    scanf("%d", &y);
    if (y == 0) {
        zero_count += 1;
    } else if (y < 0) {
        minus_sum += y;
    } else {
        plus_sum += y;
    }
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
