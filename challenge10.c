#include <stdio.h>


int main(){
    int d,m,y;
    printf("Entrez votre date en format(DD/MM/YYYY): ");
    while (scanf("%d/%d/%d", &d,&m,&y) != 3 || d>31 || m>12) {
        printf("Veuillez entrer un date valide: ");
        while (getchar() != '\n');
    }
     switch (m) {
        case 1:
            printf("%d-Janvier-%d\n", d, y);
            break;
        case 2:
            printf("%d-Février-%d\n", d, y);
            break;
        case 3:
            printf("%d-Mars-%d\n", d, y);
            break;
        case 4:
            printf("%d-Avril-%d\n", d, y);
            break;
        case 5:
            printf("%d-Mai-%d\n", d, y);
            break;
        case 6:
            printf("%d-Juin-%d\n", d, y);
            break;
        case 7:
            printf("%d-Juillet-%d\n", d, y);
            break;
        case 8:
            printf("%d-Août-%d\n", d, y);
            break;
        case 9:
            printf("%d-Septembre-%d\n", d, y);
            break;
        case 10:
            printf("%d-Octobre-%d\n", d, y);
            break;
        case 11:
            printf("%d-Novembre-%d\n", d, y);
            break;
        case 12:
            printf("%d-Décembre-%d\n", d, y);
            break;
        default:
            printf("Mois invalide !\n");
            return 1; 
    }

    return 0;
}
        


    