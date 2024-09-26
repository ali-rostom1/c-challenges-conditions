#include <stdio.h>


int main(){
    int nb;
    printf("veuillez saisir votre nombre:");
    scanf("%d",&nb);
    if((nb % 2)==0){
        printf("%d est paire.",nb);
    }else printf("%d est impaire;",nb);


}