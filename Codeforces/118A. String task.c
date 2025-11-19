#include <stdio.h>
#include <ctype.h>

int main() {
    char s[101];
    scanf("%100s", s);
    char vowels[] = "aoyeuiAOYEUI";

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        int is_vowel = 0;
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (ch == vowels[j]) {
                is_vowel = 1;
                break;
            }
        }
        if (!is_vowel) {
            printf(".%c", tolower(ch));
        }
    }

    printf("\n");
    return 0;
}
