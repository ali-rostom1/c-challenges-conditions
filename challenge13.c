#include <stdio.h>
#include <stdlib.h>

int main(){
    float Ax,Bx,Ay,By;
    float Px,Py;
    printf("Entrez les coordonnées du premier point (Ax Ay): ");
    while (scanf("%f %f", &Ax, &Ay) != 2) {
        printf("Veuillez entrer des valeurs valides pour Ax et Ay: ");
        while (getchar() != '\n');
    }
    
    printf("Entrez les coordonnées du deuxieme point (Bx By): ");
    while (scanf("%f %f", &Bx, &By) != 2) {
        printf("Veuillez entrer des valeurs valides pour Bx et By: ");
        while (getchar() != '\n');
    }
     printf("Entrez les coordonnées du troisieme point (Px Py): ");
    while (scanf("%f %f", &Px, &Py) != 2) {
        printf("Veuillez entrer des valeurs valides pour Px et Py: ");
        while (getchar() != '\n'); 
    }
    float minX=Ax;
    float mAxX=Bx;
    float minY=Ay;
    float mAxY=By;
    if(Ax>Bx){
        minX=Bx;
        mAxX=Ax;
    }
    if(Ay>By){
        minY=By;
        mAxY=Ay;
    }
    if(Px<minX || Px>mAxX || Py<minY || Py>mAxY){
        printf("le point n'appartient pas au segment");
        exit(0);
    }
    if((Px-Ax)*(By-Ay)==(Py-Ay)*(Bx-Ax)){
        printf("les trois points sont colineares donc votre points se trouve dans le segment.");
    }else printf("le point n'appartient pas au segment");
    return 0;
}
        


    