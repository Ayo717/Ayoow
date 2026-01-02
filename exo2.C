#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int N, count = 0, num = 2;
    printf("Entrez N : ");
    scanf("%d", &N);
    while (count < N) {
        if (est_premier(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    return 0;
}
