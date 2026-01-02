#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)  // Nested loop
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int N;
    printf("Entrez N : ");
    scanf("%d", &N);
    for (int i = 2; i <= 2 * N; i++) {  // Externe: nombres
        if (est_premier(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
