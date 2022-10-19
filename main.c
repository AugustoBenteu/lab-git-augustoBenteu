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

long int somaRecursiva(int x, int y){
    if(x<=y){
        long int soma = x;
        long int resultado = somaRecursiva(x+1,y);
        printf("%ld - ",resultado);
        return soma+resultado;
    }else{
        return 0;
    }
}

//produtorioRecursivo
long int produtoriaRecursiva(int x, int y){
 if(y>=x){
   //long int produto=y;
   long int resultado = produtoriaRecursiva(x,y-1);
   printf("%ld - ", resultado);
   return y*resultado;  
 }



int main(void){
    int x, y;
    printf("hello ");
    printf("\nDigita x:");
    scanf("%d",&x);
    printf("\nDigita y:");
    scanf("%d",&y);
    printf("\n A soma é: %ld",somaRecursiva(x,y));
     printf("\nA produtória é: %ld",produtoriaRecursiva(x,y));
    return 0;
}