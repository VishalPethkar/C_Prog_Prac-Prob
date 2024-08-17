#include <stdio.h>

int main() {
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("Uppercase\n");
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        printf("Lowercase\n");
    } 
    else 
    {
        printf("Not an English letter\n");
    }

    return 0;
}


/*
O/P:-
/tmp/DHZN8Kh0sa.o
Enter your character: Z
Uppercase


=== Code Execution Successful ===*/