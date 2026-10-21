#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Vowels present: ");
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c ", ch);
            count++;
        }
        i++;
    }
    printf("\n");

    printf("Total number of vowels = %d\n", count);

    return 0;
}
