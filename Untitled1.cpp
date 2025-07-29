#include <stdio.h>

void swap_add_sub(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap (add/sub): num1 = %d, num2 = %d\n", num1, num2);
    swap_add_sub(&num1, &num2);
    printf("After swap (add/sub): num1 = %d, num2 = %d\n", num1, num2);

    num1 = 5; num2 = 15; // Reset for clarity if using for 2a as well
    printf("Before swap (arithmetic, Q2a): num1 = %d, num2 = %d\n", num1, num2);
    swap_add_sub(&num1, &num2); // Same function works for 2a
    printf("After swap (arithmetic, Q2a): num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
