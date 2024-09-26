#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float Xa,Xb,Ya,Yb;
    float Xp,Yp;
    printf("Entrez les coordonnées du premier point (Xa Ya): ");
    while (scanf("%f %f", &Xa, &Ya) != 2) {
        printf("Veuillez entrer des valeurs valides pour Xa et Ya: ");
        while (getchar() != '\n');
    }
    
    printf("Entrez les coordonnées du deuxieme point (Xb Yb): ");
    while (scanf("%f %f", &Xb, &Yb) != 2) {
        printf("Veuillez entrer des valeurs valides pour Xb et Yb: ");
        while (getchar() != '\n');
    }
     printf("Entrez les coordonnées du troisieme point (Xp Yp): ");
    while (scanf("%f %f", &Xp, &Yp) != 2) {
        printf("Veuillez entrer des valeurs valides pour Xp et Yp: ");
        while (getchar() != '\n'); 
    }
    float minX=fmin(Xa,Xb);
    float maxX=fmax(Xa,Xb);
    float minY=fmin(Ya,Yb);
    float maxY=fmax(Ya,Yb);
    if(Xp<minX || Xp>maxX || Yp<minY || Yp>maxY){
        printf("le point n'appartient pas au segment");
        exit(0);
    }
    float vectorABx=Xb-Xa;
    float vectorABy=Yb-Ya;   // so now we have AB(x,y) and AP(x,y) and we can do ABx*APy == ABy*APx
    float vectorAPx=Xp-Xa;
    float vectorAPy=Yp-Ya;
    if(vectorAPx*vectorABy==vectorAPy*vectorABx){
        printf("les trois points sont colineares donc votre points se trouve dans le segment.");
    }else printf("le point n'appartient pas au segment");
    return 0;
}