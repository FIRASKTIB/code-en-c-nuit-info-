#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficherBlague() {
    int choix = rand() % 5; // Choisir une blague aléatoire

    switch (choix) {
        case 0:
            printf("Pourquoi les poissons détestent l'ordinateur ?\n");
            printf("Parce qu'ils ont peur des filets !\n\n");
            break;
        case 1:
            printf("Que dit un poisson à un autre poisson ?\n");
            printf("Rien, ils se parlent sous l'eau !\n\n");
            break;
        case 2:
            printf("Pourquoi les plongeurs plongent-ils toujours en arrière ?\n");
            printf("Parce que sinon ils tombent dans le bateau !\n\n");
            break;
        case 3:
            printf("Quel est le comble pour un poisson ?\n");
            printf("C'est d'avoir des nageoires et de ne pas savoir nager !\n\n");
            break;
        case 4:
            printf("Pourquoi les crabes ne partagent-ils jamais leurs jouets ?\n");
            printf("Parce qu'ils sont un peu égoïstes !\n\n");
            break;
    }
}

int main() {
    char choix;

    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    printf("Bienvenue dans le monde sous-marin des blagues de poissons !\n");

    do {
        printf("Voulez-vous entendre une blague sur les poissons ? (o/n) : ");
        scanf(" %c", &choix);

        if (choix == 'o' || choix == 'O') {
            afficherBlague();
        } else if (choix == 'n' || choix == 'N') {
            printf("D'accord, à la prochaine fois !\n");
        } else {
            printf("Choix invalide. Veuillez entrer 'o' pour oui ou 'n' pour non.\n");
        }
    } while (choix != 'n' && choix != 'N');

    return 0;
}