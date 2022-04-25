#include <stdio.h>
#include <stdlib.h>


void soma_vetor(int n, int number[], int number2[], int resu[]) {
    for(int i=0; i<n; i++){
        resu[i] = number[i] + number2[i];
    }
}

int main()
{
    int n, i;

    printf("Quantos numeros vai digitar? \n"); // Pegando o numero de itens que vai ter no array
    scanf("%d", &n);
    
    int number[n];
    
    printf("Escreva os numeros do primeiro vetor \n");
    for (i = 0; i < n; ++i){
        scanf("%d", &number[i]); 
    }
    
    int number2[n];
    
    printf("Escreva os numeros do segundo vetor \n");
    for (i = 0; i < n; ++i){
        scanf("%d", &number2[i]); 
    }
    
    int resu[n];
    
    soma_vetor(n, number, number2, resu);

    
    printf("Soma: \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", resu[i]); // imprime os elementos da soma na tela
    }

    return 0;
}


