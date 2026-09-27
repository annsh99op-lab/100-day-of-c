#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ')
            lastSpace = i;
        i++;
    }

    if (lastSpace == -1) {
        printf("%s", name);
        return 0;
    }

    printf("%c. ", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c. ", name[i + 1]);
    }

    i = lastSpace + 1;
    while (name[i] != '\0' && name[i] != '\n') {
        printf("%c", name[i]);
        i++;
    }

    return 0;
}
