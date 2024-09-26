#include <stdio.h>


int main(){
    float note;
    printf("Entrez votre note: ");
    while (scanf("%f", &note) != 1 || note<0 || note>20) {
        printf("Veuillez entrer une note valide: ");
        while (getchar() != '\n');
    }
    if(note>=16) printf("Tres bien !!!");
    else if(note>=14 && note<16 ) printf("Bien !!");
    else if(note>=12 && note<14) printf("Assez bien !");
    else if(note>=10 && note<12) printf("passable.");
    else printf("bon chance l'annee prochaine!");
    return 0;
}
        


    