#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <time.h>
#define NUMERO 10 

int main ()
{
    srand(time(0));
    int tab[NUMERO];
    
    for (int i = 0; i < NUMERO; i++) {
        tab[i] = rand() % 100; 
    }
 
    printf("Appuyer sur Entree pour voir les nombres a memoriser.\n");
    getchar(); 
    for (int i = 0; i < NUMERO; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");

    printf("Appuyer sur Entree pour debuter le jeu.\n");
    getchar();
    int proposition, score = 0;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif // _WIN32

    printf("Maintenant vous devez saisir les nombres dans l'ordre.\n"); 
    for (int i = 0; i < NUMERO; i++) {
        printf("\n");
        printf("Nombre %d: ", i+1);
        scanf("%d", &proposition);
        
        if (proposition == tab[i]) {
            printf("diaap nga ko waw !!\n");
            score++;
        } else {
            printf("sa khel bi nekhoul affaire bi %d kesse la woon !!\n", tab[i]);
        }
    }
    printf("Li nga diota am ngi si %d sur %d\n", score, NUMERO);
    return 0; 
}