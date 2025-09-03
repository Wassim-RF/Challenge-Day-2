#include <stdio.h>

int main() {
    int num1 , num2 ;
    int i ;
    int nombre = 1;

    printf("Entrer le nombre du base  : ");
    scanf("%d" , &num1);
    printf("Entrer le nombre du puissance : ");
    scanf("%d" , &num2);

    for (i = 1 ; i <= num2 ; i++) {
        nombre *= num1 ;
    }
    printf("%d^%d = %d" , num1 , num2 , nombre);
    return 0;
}
