#include <stdio.h>
#include <stdbool.h>

int main() {
    int notes[5];
    int somme = 0;
    float moyenne;

    printf("Entrez 5 notes sur 20 :\n\n");

    for (int i = 0; i < 5; i++) {
        int note;
        bool valide = false; 

        do {
            printf("Entrez la note %d /20 : ", i + 1);
            scanf("%d", &note);

            if (note < 0 || note > 20) { 
                printf("Erreur : La note doit etre entre 0 et 20. Reessayez.\n");
                valide = false; 
            } else {
                valide = true; 
            }
        } while (valide == false); 

        notes[i] = note; 
        somme += note;
    }

    moyenne = (float)somme / 5;
    printf("\nMoyenne : %.2f /20\n", moyenne);

    if (moyenne >= 10) {
        printf("Resultat : ADMIS \n");
    } else {
        printf("Resultat : ECHEC \n");
    }

    return 0;
}