
#include <stdio.h>
int main() 
{
    float peso, altura, IMC;

    printf("Calculador de indice de masa corporal (IMC)\n");
    printf("Ingrese su peso en kilogramos (kg): ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros (m): ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n", IMC);
    printf("Indice      |   Condición\n");
    printf("---------------------------\n");
    printf("<18.5       |   Bajo peso\n");
    printf("18.5 a 24.9 |   Peso normal\n");
    printf("25.0 a 29.9 |   Sobrepeso\n");
    printf(">=30        |   Obesidad\n");
    

return 0;
}