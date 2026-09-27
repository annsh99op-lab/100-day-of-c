#include <stdio.h>

int main() {
    char a[100], b[100];
    int count[256] = {0};
    int i = 0;

    scanf("%s", a);
    scanf("%s", b);

    while (a[i] != '\0') {
        count[(unsigned char)a[i]]++;
        i++;
    }

    i = 0;
    while (b[i] != '\0') {
        count[(unsigned char)b[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
