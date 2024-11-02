#include <stdio.h>

int main() {
    float moyenne;

    // Demande de la moyenne générale de l'étudiant
    printf("Entrez votre moyenne generale : ");
    scanf("%f", &moyenne);

    // Détermination de la mention en fonction de la moyenne
    if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez Bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne >= 16 && moyenne < 18) {
        printf("Mention : Tres Bien\n");
    } else if (moyenne >= 18) {
        printf("Mention : Excellent\n");
    } else {
        printf("Moyenne invalide. La moyenne doit etre au moins 10.\n");
    }

    return 0;
}
