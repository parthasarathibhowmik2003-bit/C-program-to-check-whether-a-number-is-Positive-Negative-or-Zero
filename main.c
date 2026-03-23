#include <stdio.h>

int main() {
    double number;

    printf("=== Check Positive, Negative, or Zero ===\n\n");

    printf("Enter a Number: ");
    scanf("%lf", &number);

    // Check using if-else ladder
    if (number > 0) {
        printf("\nResult: %.2lf is a POSITIVE number. ✓\n", number);
    } else if (number < 0) {
        printf("\nResult: %.2lf is a NEGATIVE number. ✗\n", number);
    } else {
        printf("\nResult: The number is ZERO. ◎\n");
    }

    return 0;
}
