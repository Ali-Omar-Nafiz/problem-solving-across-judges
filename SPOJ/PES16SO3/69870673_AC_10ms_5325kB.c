#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Increased buffer sizes to prevent overflow
typedef struct {
    char reg[100];  
    char name[100];
    double cg;
} Student;

// Standard C comparator for qsort
int compareStudents(const void *a, const void *b) {
    const Student *s1 = (const Student *)a;
    const Student *s2 = (const Student *)b;
    return strcmp(s1->reg, s2->reg);
}

void solve() {
    long long n;
    if (scanf("%lld", &n) != 1 || n <= 0) return;

    // Use calloc to initialize memory to zero (safer than malloc)
    Student *v = (Student *)calloc(n, sizeof(Student));
    if (v == NULL) return; 

    for (long long i = 0; i < n; i++) {
        // %99s ensures we don't read more than the buffer can hold
        if (scanf("%99s %99s %lf", v[i].reg, v[i].name, &v[i].cg) != 3) {
            break;
        }
    }

    qsort(v, n, sizeof(Student), compareStudents);

    for (long long i = 0; i < n; i++) {
        printf("%s %s %.2f\n", v[i].reg, v[i].name, v[i].cg);
    }
    printf("\n");

    free(v);
}

int main() {
    // Standard I/O in C is already fast, but this helps 
    // when piping large files
    solve();
    return 0;
}