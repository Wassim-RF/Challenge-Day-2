#include <stdio.h>

int main() {
    int num;
    int i;
    int somme = 0;

    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    for (i = 1 ; i <= num ; i++) {
        somme += i;
    }
    printf("Le somme des nombrenaturelle est :  %d\n " , somme);
}