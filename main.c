#include <stdio.h>
printf("Bienvenue dans le projet collaboratif !\n");

int produit(int a, int b) {
    return a * b;
}

float moyenne(int a, int b) {
    return (float)(a + b) / 2.0f;
}

int main() {
    printf("Projet collaboratif\n");
    printf("Produit : %d\n", produit(2, 3));
    printf("Moyenne : %.2f\n", moyenne(2, 3));
    return 0;
}