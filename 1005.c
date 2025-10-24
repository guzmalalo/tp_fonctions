#include <stdio.h>
#include <math.h>
#include "rectangle.h"


#define TRIANGLE 2
#define SORTIE 3

int initTriangle()
{
    int cote;
    printf("Coté du triangle ? : ");
    scanf("%d", &cote);
    return cote;
}

float aireTriangle(int cote)
{
    float aire = cote * cote * sqrt(3) / 4;
    return aire;
}

void afficherTriangle(int cote)
{
    for (int i = 0; i < cote; ++i)
    {
        // affichage des spaces
        for (int j = 0; j < cote - i; ++j)
        {
            printf(" ");
        }

        // affichage des etoiles
        for (int j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void Triangle(void)
{
    int cote = 0;
    float aire = 0;
    // initialisation du côté
    cote = initTriangle();
    // aire triangle
    aire = aireTriangle(cote);
    printf("L'aire du triangle est : %f \n", aire);
    // affichage triangle
    afficherTriangle(cote);
}


// EXO 1005
int main(void)
{
    int choix;

    do
    {
        printf("Quelle forme? (1:Rectangle, 2:Triangle, 3:Sortir) : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case RECTANGLE:
            Rectangle();
            break;
        case TRIANGLE:
            Triangle();
            break;
        case SORTIE:
            printf("Au revoir");
            break;
        default:
            printf("Choix inconnu");
        }
    }
    while (choix != 3);


    return 0;
}
