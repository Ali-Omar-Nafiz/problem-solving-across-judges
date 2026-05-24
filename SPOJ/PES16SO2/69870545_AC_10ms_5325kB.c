#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining the Student structure
typedef struct {
    char reg[50];
    char name[100];
    double cg;
} Student;

// Comparison function for qsort
// Logic: Sort by name ascending. If names are equal, sort by CGPA descending.
int compareStudents(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;

    int name_cmp = strcmp(s1->name, s2->name);
    if (name_cmp == 0) {
        if (s1->cg > s2->cg) return -1; // Higher CGPA comes first
        if (s1->cg < s2->cg) return 1;
        return 0;
    }
    return name_cmp;
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    // Allocating memory dynamically (equivalent to std::vector)
    Student *v = (Student *)malloc(n * sizeof(Student));
    if (v == NULL) return;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf", v[i].reg, v[i].name, &v[i].cg);
    }

    // Using C standard library quicksort
    qsort(v, n, sizeof(Student), compareStudents);

    for (int i = 0; i < n; i++) {
        printf("%s %s %.2f\n", v[i].reg, v[i].name, v[i].cg);
    }
    printf("\n");

    free(v); // Clean up memory
}

int main() {
    // In C, there is no direct equivalent to FAST_IO, 
    // but scanf/printf are generally fast enough.
    int t = 1;
    // scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}