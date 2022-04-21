// TEST-File: Division durch Null
*/
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;

    // Computes remainder
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[]) {
    int score = 1;

START:
    if (score > 1000)
        goto EXIT;

    score += 1;
    goto START;

EXIT:
    printf("score: %d\n", score);
    exit(EXIT_SUCCESS);
}
