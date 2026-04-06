#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int implemented = 0;

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        int sure_count = petya + vasya + tonya;

        if (sure_count >= 2) {
            implemented++;
        }
    }

    printf("%d\n", implemented);

    return 0;
}
