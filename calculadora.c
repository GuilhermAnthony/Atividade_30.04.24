#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1;
    float num2;
    float resultado;
    char operacao;
    int continuar;
    
    continuar = 1;
    
    while (continuar) {
        printf("Digite a aperacao desejada (+ - * /):\n");
        scanf(" %c", &operacao);
        
        printf("Digite o primeiro numero:\n");
        scanf("%f", &num1);
        
        printf("Digite o segundo numero:\n");
        scanf("%f", &num2);

   switch (operacao) {
       
       case '+':
       resultado = num1 + num2;
       printf("Resultado:%.2f\n",resultado);
       break;
       
       case '-':
       resultado = num1 - num2;
       printf("Resultado:%.2f\n",resultado);
       break;
       
       case '*':
       resultado = num1 * num2;
       printf("Resultado:%.2f\n",resultado);
       break;
       
       case '/':
       if (num1 != 0 && num2 != 0) {
           
       resultado = num1 / num2;
       printf("Resultado:%.2f\n",resultado);
       } 
       
       else {
       printf("Não é possivel dividir por zero");
       }
       break;
       
       default:
       printf("Operacao invalida");
       
       }
       
       printf("\nDeseja continuar? (1 para sim, 0 para não):");
       scanf("%d",&continuar);
        
    }
   
}

