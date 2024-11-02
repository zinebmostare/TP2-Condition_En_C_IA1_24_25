#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2, realPart, imaginaryPart;

    // Entrée des coefficients
    printf("Entrez les coefficients a, b et c : ");
    scanf("%f %f %f", &a, &b, &c);

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // Vérification du discriminant pour déterminer la nature des solutions
    if (discriminant > 0) {
        // Deux solutions réelles et distinctes
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont : x1 = %.2f et x2 = %.2f\n", x1, x2);
    }
    else if (discriminant == 0) {
        // Une solution réelle et double
        x1 = -b / (2 * a);
        printf("La solution double est : x1 = x2 = %.2f\n", x1);
    }
    else {
        // Deux solutions complexes
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Les solutions complexes sont :\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
