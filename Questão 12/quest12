// Ponteiros para funções guardam endereços para areas de código, 
    // de acordo com o Prof. Márcio Sarroglia Pinho: "O uso de ponteiros para funções em C serve principalmente para definir, 
    // em tempo de execução, qual função será executada, sem a necessidade de escrever o nome da função, 
    // de forma explícita naquele ponto do código."
    
    // Exemplo: 

#include <stdio.h>

int funcao(int a){ // apenas soma 3
    return a + 3;
};

int declara(int (*f) (int), int x){ // função especifica para declarar funções para ponteiros
    printf("valor = %d\n", f(x));
};

int main()
{
    int *opcao;
    printf("Digite um valor: \n");
    scanf("%d", &opcao);
    
    declara(funcao, opcao); // chama a funcao declara e passa como parametro a funcao que quer executar
    
    return 0;
}


