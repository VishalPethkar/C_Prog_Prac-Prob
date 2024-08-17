/*write a prog to check if a num is divisible by 2 or not */

#include <stdio.h>

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("%d is even\n", x);
    } else {
        printf("%d is odd\n", x);
    }

    return 0;
}


/*
#Enter a number: 23
23 is odd

#Enter a number: 22
22 is even
=== Code Execution Successful ===*/