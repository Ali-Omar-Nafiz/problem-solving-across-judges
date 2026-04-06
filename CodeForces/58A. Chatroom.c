#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    char hello[] = "hello";
    scanf("%100s", word);

    int j = 0, pas = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == hello[j]) {
            j++;
            pas++;
        }
        if (pas == 5) {
            break;
        }
    }

    if (pas == 5) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
