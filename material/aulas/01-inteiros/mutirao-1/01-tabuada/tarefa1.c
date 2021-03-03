#include <stdio.h>

void tabuada(int a){
    for (int i = 2; i <= a; i++) {
        for (int j = 1; j <= a; j++) {
            printf("%d ",i*j);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    int numero;
    scanf("%d",&numero);
    tabuada(numero);

    return 0;
}