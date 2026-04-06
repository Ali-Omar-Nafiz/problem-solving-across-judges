#include <stdio.h>

int main() {
    int n, l1 = 0, r1 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int left, right;
        scanf("%d%d", &left, &right);
        if (left == 1) l1++;
        if (right == 1) r1++;
    }

    int l0 = n - l1;
    int r0 = n - r1;

    printf("%d\n", (l1 < l0 ? l1 : l0) + (r1 < r0 ? r1 : r0));
    return 0;
}
