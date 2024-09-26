#include <stdio.h>


int main(){
    int nb;
    printf("Entrez votre nombre: ");
    scanf("%d",&nb);
    if(nb>0) printf("votre nombre est positive.");
    else if (nb<0) printf("votre nombre est negative.");
    else printf("votre nombre est nul.");
    return 0;
}
        


    