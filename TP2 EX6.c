#include <stdio.h>

int main() {
    float masse, poids;
    int numero_planete;

    // Tableau des valeurs de g pour chaque plan�te
    float gravite[] = {0, 3.7, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15};

    // Demande de la masse de l'objet
    printf("Entrez la masse de l'objet en kg : ");
    scanf("%f", &masse);

    // Demande du num�ro de la plan�te
    printf("Entrez le num�ro de la plan�te (1 � 8) : ");
    scanf("%d", &numero_planete);

    // V�rification si le num�ro de la plan�te est valide
    if (numero_planete >= 1 && numero_planete <= 8) {
        poids = masse * gravite[numero_planete];
        printf("Le poids de l'objet sur cette plan�te est : %.2f N\n", poids);
    } else {
        printf("Num�ro de plan�te invalide. Veuillez entrer un nombre entre 1 et 8.\n");
    }

    return 0;
}
