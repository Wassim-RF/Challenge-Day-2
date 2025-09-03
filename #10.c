#include <stdio.h>

int main() {
    int num;
    int i;
    int somme1 = 0;
    int somme2 = 0;

    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    for (i = 1 ; i <= num ; i++) {
        somme1 += i;
        printf("%d " , i);
        if (i < num) {
            printf("+ ");
        }
    }
    printf(" = %d\n" , somme1);
    somme2 = num*(num +  1)/2;
    printf("%d(%d + 1)/2 = %d\n" , num , num , somme2);
    do {
        printf("Les deux methodes sont identique.");
    } while (somme1 != somme2);
    return 0;
}