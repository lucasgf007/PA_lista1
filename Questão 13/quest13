#include <stdio.h>
#include <stdlib.h>

void ordem(int n, float number[]){
    
    int a, i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
}

int main()
{
    int n, i;

    printf("Quantos numeros vai digitar? \n");
    scanf("%d", &n);
    float *number = (float *)malloc(n*sizeof(float));
    
    printf("Escreva os numeros \n");
    for (i = 0; i < n; ++i){
        scanf("%f", &number[i]);
    }
    
    ordem(n, number);
    
    printf("Numeros da ordem \n");
    for (i = 0; i < n; ++i){
        printf("%f\n", number[i]);
    }

    return 0;
}


