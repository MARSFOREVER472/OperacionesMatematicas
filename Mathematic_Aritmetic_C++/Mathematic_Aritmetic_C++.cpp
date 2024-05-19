#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    // VAMOS A DECLARAR ALGUNAS VARIABLES MATEMÁTICAS...

    double number = -3.1785;
    int number2 = 6;
    double PI = 3.14159;

    // CÓMO OBTENER EL VALOR ABSOLUTO ENTRE ESTOS NÚMEROS...

       // printf("El valor absoluto de un numero es %g y el de otro es %g", fabs(number), fabs(number2)); // VALOR ABSOLUTO DE UN NÚMERO.

       // printf("La raiz cuadrada de un numero es %g", sqrt(PI)); // RAÍZ CUADRADA DE UN NÚMERO.

    printf("El numero elevado a la potencia de otro numero es: %g", pow(number, number2)); // POTENCIA DE UN NÚMERO.

    return 0;
}
