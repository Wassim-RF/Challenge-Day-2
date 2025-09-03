#include <stdio.h>

int main() {
    int num;
    int  n  = 0;
    printf("Entrer un nombre positive : ");
    scanf("%d" , &num);

    while (num) {
        if (num != 0) {
            num = num / 10 ;
            n++;
        } else if (num == 0) {
            break;
        }
    }
    printf("Le nombre des chiffre dans votre nombre est : %d " , n);
    return 0;
}