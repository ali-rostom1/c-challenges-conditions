#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("veuillez saisir votre caracter:");
    scanf("%c",&c);
    switch (tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est une voyelle.", c);
            break;   
        default:
            printf("%c n'est pas une voyelle.", c);
}
}