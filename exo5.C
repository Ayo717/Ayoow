#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int totalMinutes, h, m;

    printf("Donner la premiere heure (hh mm) : ");
    scanf("%d %d", &h1, &m1);

    printf("Donner la deuxieme heure (hh mm) : ");
    scanf("%d %d", &h2, &m2);

    totalMinutes = h1 * 60 + m1 + h2 * 60 + m2;

    h = totalMinutes / 60;
    m = totalMinutes % 60;

    printf("Somme = %02d h %02d min\n", h, m);

    return 0;
}

