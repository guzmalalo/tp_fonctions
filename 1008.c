#include <stdio.h>

struct influencer
{
    int nbLikes ;
    int nbCommentaires;
    int nbAbonnes ;
    short int age;
};

typedef struct influencer Influencer;


float tauxEngagement(Influencer x){
    float taux = (float)(x.nbLikes + x.nbCommentaires)/(float)x.nbAbonnes *100;
    return (taux>100) ? 100: taux;
}

void performance(float const taux){
    if(taux < 1){
        printf("Taux d'engagement %.2f %% faible", taux);
    } else if (taux < 10){
        printf("Taux d'engagement %.2f %% moyen", taux);
    } else{
        printf("Taux d'engagement %.2f %% élevé", taux);
    }
}



int main(void) {

    struct influencer trump;
    float taux;



    printf("Rentrez votre nombre d'abonnés: ");
    scanf("%d", &trump.nbAbonnes);
    printf("Rentrez votre nombre de likes: ");
    scanf("%d", &trump.nbLikes);
    printf("Rentrez votre nombre de comentaires : ");
    scanf("%d", &trump.nbCommentaires);

    //procedure
    taux = tauxEngagement(trump);

    printf("\n ----------------\n");
    printf("Nombre d'abonnés : %d \n", nbAbonnes);
    printf("Nombre de likes : %d\n", nbLikes);
    printf("Nombre de commentaires : %d\n", nbCommentaires);
    performance(taux);


    return 0;
}
