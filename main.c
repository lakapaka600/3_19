#include <stdio.h>

int main(void) {
int lato1,lato2,lato3;
    printf("inserisci  lato1: ");
    scanf("%d",&lato1);
    printf("inserisci lato2: ");
    scanf("%d",&lato2);
    printf("inserisci lato3: ");
    scanf("%d",&lato3);
    if (lato1==lato2 && lato2==lato3) {
        printf("il triangolo è equilatero");
    }
    else if (lato1==lato3 && lato1 != lato2 || lato2==lato3 && lato3 != lato1 || lato1 == lato2 && lato2 != lato3) {
        printf("il triangolo è isoscele");
    }


    else {
        printf("il triangolo è scaleno");
    }

    return 0;

}