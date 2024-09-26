#include <stdio.h>


int main(){
    int h1,m1,s1;
    printf("Entrez votre 1er instant en format(HH:MM:SS): ");
    while (scanf("%d:%d:%d", &h1,&m1,&s1) != 3 || h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59 || s1 < 0 || s1 > 59) {
        printf("Veuillez entrer un instant valide: ");
        while (getchar() != '\n');
    }
    int h2,m2,s2;
    printf("Entrez votre 2eme instant en format(HH:MM:SS): ");
    while (scanf("%d:%d:%d", &h2,&m2,&s2) != 3 || h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59 || s2 < 0 || s2 > 59) {
        printf("Veuillez entrer un instant valide: ");
        while (getchar() != '\n');
    }
    if(h1>h2){
        printf("Le deuxième instant vient avant le premier ;");
    }else if(h1<h2) {
        printf("Le premier instant vient avant le deuxième ;");
    }else {
        if(m1>m2){
            printf("Le deuxième instant vient avant le premier ;");
        }else if(m1<m2) {
            printf("Le premier instant vient avant le deuxième ;");
        }else{
            if(s1>s2){
                printf("Le deuxième instant vient avant le premier ;");
            }else if(s1<s2) {
                printf("Le premier instant vient avant le deuxième ;");
            }else{
                printf("Il s'agit du même instant.");
        }
        }
    }



    return 0;
}
        


    