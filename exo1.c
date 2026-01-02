#include <stdio.h>

int main() {
    int N, i, j, k;
    printf("Entrez N : ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {  // Boucle lignes
        for (k = 1; k <= N - i; k++) printf(" ");  // Nested: espaces
        for (j = 1; j <= 2 * i - 1; j++) printf("*");  // Nested: étoiles
        printf("\n");
    }
    return 0;
}
