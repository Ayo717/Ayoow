#include <stdio.h>

int estBissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int j, m, a;
    int maxJours;

    printf("Donner une date (j/m/an) : ");
    scanf("%d/%d/%d", &j, &m, &a);

    if (a <= 0 || m < 1 || m > 12 || j < 1 || j > 31) {
        printf("Date non valide.\n");
        return 0;
    }

    if (m == 2) {
        if (estBissextile(a))
            maxJours = 29;
        else
            maxJours = 28;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxJours = 30;
    } else {
        maxJours = 31;
    }

    if (j >= 1 && j <= maxJours)
        printf("Date valide.\n");
    else
        printf("Date non valide.\n");

    return 0;
}

