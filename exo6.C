#include <stdio.h>

int main() {
    int age, heure;

    printf("Entrez l'age du client : ");
    scanf("%d", &age);

    printf("Entrez l'heure de la seance : ");
    scanf("%d", &heure);

    /* Contraintes de validite */
    if (age <= 0 || heure < 0 || heure > 23) {
        printf("Erreur de saisie.\n");
        return 0;
    }

    if (age < 4) {
        printf("Entree gratuite\n");
    } else if (age < 12) {
        if (heure >= 10 && heure <= 18)
            printf("Tarif matin enfant : 5 DH\n");
        else
            printf("Tarif soir enfant : 6 DH\n");
    } else if (age < 60) {
        if (heure < 17)
            printf("Tarif normal : 10 DH\n");
        else
            printf("Tarif soir : 12 DH\n");
    } else { /* age >= 60 */
        if (heure < 12)
            printf("Tarif senior matin : 6 DH\n");
        else
            printf("Tarif senior : 8 DH\n");
    }

    return 0;
}

