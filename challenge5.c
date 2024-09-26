#include <stdio.h>


int main(){
    int annee,nb;
    printf("Entrez le nombre d'annees a convertir : ");
    while (scanf("%d", &annee) != 1 || annee < 0) {
        printf("saisir un nombre entier positif !!! : ");
        while (getchar() != '\n'); // Clear invalid input
    }
    
    do{
        printf("\nMenu de conversion d'annee:\n");
        printf("1 Convertir en mois.\n");
        printf("2 Convertir en jours.\n");
        printf("3 Convertir en heures.\n");
        printf("4 Convertir en minutes.\n");
        printf("5 Convertir en secondes.\n");
        printf("6 EXIT.\n");
        printf("Veuillez choisir un nombre : ");

        while(scanf("%d",&nb) != 1 || nb < 1 || nb > 6 ){
            printf("veuillez entrer un nombre entre 1 et 6 : ");
            while (getchar() != '\n');
        }


        switch(nb){
            case 1:
                printf("%d annees = %d mois",annee,annee*12);
                break;
            case 2:
                printf("%d annees = %d jours",annee,annee*365);
                break;
            case 3:
                printf("%d annees = %d heures",annee,annee*365*24);
                break;
            case 4:
                printf("%d annees = %d minutes",annee,annee*365*24*60);
                break;
            case 5:
                printf("%d annees = %d secondes",annee,annee*(365*24*60*60));
                break;
            case 6:
                printf("Exiting\n");
                break;
            default:
                printf("Choix invalide, veuillez reessayer.\n");
                break;
        }

    }while(nb!=6);

    return 0;
}
        


    