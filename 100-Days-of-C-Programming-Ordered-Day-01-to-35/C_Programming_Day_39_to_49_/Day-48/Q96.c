#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end, j;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        while (str[i] == ' ') {
            printf(" ");
            i++;
        }

        start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;
        for (j = end; j >= start; j--)
            printf("%c", str[j]);
    }

    return 0;
}
