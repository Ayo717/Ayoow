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

    switch (m) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            maxJours = 31;
            break;
        case 4: case 6: case 9: case 11:
            maxJours = 30;
            break;
        case 2:
            if (estBissextile(a))
                maxJours = 29;
            else
                maxJours = 28;
            break;
        default:
            maxJours = 0;
    }

    if (j >= 1 && j <= maxJours)
        printf("Date valide.\n");
    else
        printf("Date non valide.\n");

    return 0;
}

