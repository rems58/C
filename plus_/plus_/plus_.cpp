#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void askint( int *check) {
    char relance;
    printf("Taper y pour refaire une partie ou taper n pour quitter: \n");
    scanf_s("%c", &relance);
    while (getchar() == '\n');
    if (relance == 'y' || relance == 'Y') {
        *check = 1;
    }
    else if (relance == 'n' || relance == 'N') {
         *check = 0;
    }
}


int main() {




    int a = 0;
    int min;
    int max;
    char relance;

    while (true) {
        int check = -1;
        int j = 10;
        int nbgen = rand() % 100 + 1;

        printf("Entre un nombre min: \n");
        scanf_s("%d", &min);
        printf("Entre un nombre max: \n");
        scanf_s("%d", &max);
        while (getchar() == '\n');
      



        while (a != nbgen) {
            printf("Entre un nombre: \n");
            scanf_s("%d", &a);
            while (getchar() == '\n');

            //printf("%d", nbgen);

            if (a >= min && a <= max) {
                if (a < nbgen) {
                    printf("nombre plus petit \n");
                }
                else if (a > nbgen) {
                    printf("nombre plus grand \n");

                }
                else {
                    printf("c'est gagne !!!! \n");
                    askint(&check);
                }
                j = j - 1;
                printf("tentative restante: ");
                printf("%d \n", j);
                if (j <= 0) {
                    printf("c'est perdu ! \n");
                    askint(&check);
                }
            }
            else if (a <= min || a >= max) {
                printf("entre un nombre entre min et max: \n");
            }


            
        }
        if (check == 0) {
            break;
        }
    }
 
   
        

    return 0;
}

