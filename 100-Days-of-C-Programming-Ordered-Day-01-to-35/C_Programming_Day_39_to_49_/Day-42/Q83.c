#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}
