#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("Donner a, b et c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("Pas de solution (a = 0 et b = 0).\n");
        } else {
            x1 = -c / b;
            printf("Equation du 1er degre, solution unique x = %lf\n", x1);
        }
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Deux solutions reelles distinctes : x1 = %lf et x2 = %lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Une solution reelle double : x = %lf\n", x1);
    } else {
        printf("Pas de solutions reelle (delta < 0)\n");
    }

    return 0;
}

