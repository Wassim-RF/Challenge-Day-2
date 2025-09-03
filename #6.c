#include <stdio.h>

int main() {
    int num;
    int i;
    int pair;

    printf("Entrer un nombre : ");
    scanf("%d" , &num);

    for (i = 1 ; i <= num ; i++) {
        pair = 2 * i;
        if (pair % 2 == 0) {
            printf("%d " , pair);
        }
        
    } 
    return 0;
}