#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int rndm_nb;
    srand(time(NULL));
    rndm_nb = rand() % 7;
    switch(rndm_nb){
        case 0:
            printf("Lundi");
            break;
        case 1:
            printf("Mardi");
            break;
        case 2:
            printf("Mercredi");
            break;
        case 3:
            printf("Jeudi");
            break;
        case 4:
            printf("Vendredi");
            break;
        case 5:
            printf("Samedi");
            break;
        case 6:
            printf("Dimanche");
            break;
        default:
            break;
    }
    return 0;
}
        


    