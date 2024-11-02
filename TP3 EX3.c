#include <stdio.h>

float calculer_poids_ideal(char genre, float taille) {
    if (genre == 'F' || genre == 'f') {
        return (taille - 100) - ((taille - 150) / 2.5);
    } else if (genre == 'H' || genre == 'h') {
        return (taille - 100) - ((taille - 150) / 4);
    } else {
        printf("Genre non valide. Utilisez 'H' pour homme ou 'F' pour femme.\n");
        return -1;  // Indique une erreur
    }
}

int main() {
    char genre;
    float taille, poids_ideal;

    printf("Entrez votre genre (H pour homme, F pour femme) : ");
    scanf(" %c", &genre);
    printf("Entrez votre taille en cm : ");
    scanf("%f", &taille);

    poids_ideal = calculer_poids_ideal(genre, taille);

    if (poids_ideal != -1) {  // Affiche le poids idéal seulement si l'entrée est valide
        printf("Votre poids idéal est : %.2f kg\n", poids_ideal);
    }

    return 0;
}
