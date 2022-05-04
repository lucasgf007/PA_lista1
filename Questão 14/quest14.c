#include <stdio.h>
#include <stdlib.h>

/* 
    A função recebe dois parametros, e através de uma condicional, é determinasdo
    se um item é mior ou menor que o outro, nesse sentido, deverá retornar 1 se 
    o primeiro valor for maior que o segundo, deverá retornar -1 se o primeiro 
    valor for menor do que o segundo e por fim, deverá retornar 0 se os valores
    forem iguais.
*/
int ordem(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}

int main()
{
    int n, i;

    printf("Quantos numeros vai digitar? \n"); // Pegando itens vai ter no array
    scanf("%d", &n);
    
    int number[n]; // criando um array de N itens
    
    printf("Escreva os numeros \n");
    for (i = 0; i < n; ++i){
        scanf("%d", &number[i]); // armazena em cada item do array, cada valor digitado respectivamente
    }
    
    /* a função qsort() vai receber como primeiro parametro o array definido acima,
    o 2 parametro é o tamanho do array, o 3 é o tamanho de bytes de cada item do array, 
    e por ultimo, chama a função que irá colocar os itens em ordem
    */
    qsort(number,n,sizeof(int),ordem); 
    
    
    printf("Numeros da ordem \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", number[i]); // imprime os elementos em ordem na tela
    }

    return 0;
}


