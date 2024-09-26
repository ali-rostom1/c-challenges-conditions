#include <stdio.h>


int main(){
    char c;
    printf("Entrez votre caractere: ");
    while (scanf("%c", &c) != 1) {
        printf("Veuillez entrer un caractere valide: ");
        while (getchar() != '\n');
    }
    if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        if(c>='A' && c<='Z') printf("%c est majuscule .",c);
        else printf("%c est minuscule .",c);
    }else printf("%c n'est pas une lettre d'alphabet.",c);
    return 0;
}
        


    