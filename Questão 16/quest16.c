#include <stdio.h>
#include <stdlib.h>
#include <time.h> //clock(), CLOCKS_PER_SEC e clock_t


/* 
    A função recebe dois parametros, e através de uma condicional, é determinasdo
    se um item é mior ou menor que o outro, nesse sentido, deverá retornar 1 se 
    o primeiro valor for maior que o segundo, deverá retornar -1 se o primeiro 
    valor for menor do que o segundo e por fim, deverá retornar 0 se os valores
    forem iguais.
*/
int ordem(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, i;
    clock_t t; //variável para armazenar tempo

    printf("Quantos numeros vai digitar? \n"); // Pegando itens vai ter no array
    scanf("%d", &n);
    
    int number[n]; // criando um array de N itens
    
    printf("Escreva os numeros \n");
    for (i = 0; i < n; ++i){
        scanf("%d", &number[i]); // armazena em cada item do array, cada valor digitado respectivamente
    }
    
    
    //Verificando tempo de execução do bubble sort=> t2
    t = clock(); //armazena tempo
    
    /* a função qsort() vai receber como primeiro parametro o array definido acima,
    o 2 parametro é o tamanho do array, o 3 é o tamanho de bytes de cada item do array, 
    e por ultimo, chama a função que irá colocar os itens em ordem
    */
    qsort(number,n,sizeof(int),ordem); 
    
    
    printf("Numeros da ordem \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", number[i]); // imprime os elementos em ordem na tela
    }




     t = clock() - t; //tempo final - tempo inicial
     //imprime o tempo na tela
     printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
     
     
    return 0;
}
    //------------------------------------------------------------------------------------------------------------------
    // RESULTADO DE TEMPO DA QUEST 14: 0.016000
    //------------------------------------------------------------------------------------------------------------------


