#include <stdio.h>

int main() {
    
    int jour_actuel, mois_actuel, annee_actuelle;
    int jour_naissance, mois_naissance, annee_naissance;
    int age;

    printf("Entrez la date actuelle (Jour Mois Annee):\n");
    
    printf("Jour: ");
    scanf("%d", &jour_actuel); 
    
    printf("Mois: ");
    scanf("%d", &mois_actuel);
    
    printf("Annee: ");
    scanf("%d", &annee_actuelle);

    printf("\nEntrez la date de naissance (Jour Mois Annee):\n");
    
    printf("Jour: ");
    scanf("%d", &jour_naissance);
    
    printf("Mois: ");
    scanf("%d", &mois_naissance);
    
    printf("Annee: ");
    scanf("%d", &annee_naissance);


    age = annee_actuelle - annee_naissance;

    
    if (mois_actuel < mois_naissance) {
        age = age - 1;
    } 
    
    else if (mois_actuel == mois_naissance) {
        if (jour_actuel < jour_naissance) {
            age = age - 1;
        }
    }

    printf("\n--- Resultat ---\n");
    printf("Pour la date de naissance %d/%d/%d et la date actuelle %d/%d/%d:\n", 
           jour_naissance, mois_naissance, annee_naissance, 
           jour_actuel, mois_actuel, annee_actuelle);
           
    printf("Cette personne a %d ans.\n", age);

    return 0;
}
