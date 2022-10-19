#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(int x, int y){
    int i;
    long int soma = 0;
    for(i=x;i<=y;i++){
        soma++;
    }
}

int main(void){
    int x, y;
    printf("hello ");
    printf("Digita x:");
    scanf("%d",&x);
    printf("Digita y:");
    scanf("%d",&y);
    soma(x,y);
    return 0;
}