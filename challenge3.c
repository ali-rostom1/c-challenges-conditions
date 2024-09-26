#include <stdio.h>


int main(){
    int nb1,nb2;
    printf("veuillez saisir votre deux nombre:");
    scanf("%d%d",&nb1,&nb2);
    if(nb1==nb2){
        printf("resultat est: %d .",6*nb1);
    }else printf("le resultat est %d .",nb1+nb2);
    

}