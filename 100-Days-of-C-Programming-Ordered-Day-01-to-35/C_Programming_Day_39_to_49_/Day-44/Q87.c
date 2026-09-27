#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (!((ch >= 'a' && ch <= 'z') ||
                   (ch >= 'A' && ch <= 'Z')))
            special++;

        i++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d",
           spaces, digits, special);

    return 0;
}
