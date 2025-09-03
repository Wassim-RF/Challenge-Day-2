#include <stdio.h>

int main() {
    int num;
    int i;
    int premiers;
    printf("Entrer un nombre : ");
    scanf("%d" , &num);
    for (i = 1 ; i <= num ; i++) {
        premiers = 2 * i - 1;
        if (premiers/premiers && premiers / 1) {
            printf("%d " , premiers);
        }
    } 
    return 0;
}