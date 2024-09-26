#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    float delta,x1,x2;
    printf("veuillez entrez les a,b et c de votre equation de deuxieme degree.\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    delta = pow(b,2) - (4*a*c);
    if(delta>0){
        x1 = ((-b-sqrt(delta))/(2.0*a));
        x2 = ((-b+sqrt(delta))/(2.0*a));
        printf("l'equation a deux solution:\tx1 = %.2f x2=%.2f",x1,x2);
    }else if(delta==0){
        x1= -b/(2.0*a);
        printf("l'equation a une solution:\tx1 = %.2f",x1);
    }else printf("l'equation n'a pas de solution.");


    return 0;
}
        
        

    