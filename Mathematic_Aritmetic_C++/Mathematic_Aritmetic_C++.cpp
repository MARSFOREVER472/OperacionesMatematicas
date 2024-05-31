#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    // VAMOS A DECLARAR ALGUNAS VARIABLES MATEMÁTICAS...

    // double number = -3.1785;
    // int number2 = 6;
    // double PI = 3.14159;

    int opcion; // SE DEBE DE ELEGIR UNA OPCIÓN DEL MENÚ...
    float first = 1; // PRIMER NÚMERO A ELEGIR DE LA OPERACIÓN.
    float second = 1; // SEGUNDO NÚMERO A EFECTUAR LA OPERACIÓN.
    float third = 1; // TERCER NÚMERO A EFECTUAR LA OPERACIÓN.
    float result; // RESULTADO FINAL.

        cout << "********** SELECCIONE UNA OPERACION DEL 1 AL 8! **********" << endl;
        cin >> opcion;

        // SI ES QUE ELIGIÓ UNA OPCIÓN NO EXISTENTE ENTRE ELLAS...

        if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4
            && opcion != 5 && opcion != 6 && opcion != 7 && opcion != 8)
        {
            exit(EXIT_FAILURE); // FUNCIÓN QUE HACE PARA SALIR DEL PROGRAMA.
        }

        cout << "INGRESE UN NUMERO: " << endl;
        cin >> first;

        cout << "INGRESE OTRO NUMERO: " << endl;
        cin >> second;

        // cout << "INGRESE UN ULTIMO NUMERO: " << endl;
        // cin >> third;

        if (opcion == 1) // SUMAR 2 NÚMEROS
        {
            cout << "********** SUMA TOTAL DE 2 NUMEROS **********" << endl;
            result = first + second; // SUMA.
        }

        if (opcion == 2) // RESTAR 2 NÚMEROS
        {
            cout << "********** RESTA TOTAL DE 2 NUMEROS **********" << endl;
            result = first - second; // RESTA.
        }

        if (opcion == 3) // MULTIPLICAR 2 NÚMEROS
        {
            cout << "********** MULTIPLICACION TOTAL DE 2 NUMEROS **********" << endl;
            result = first * second; // MULTIPLICACIÓN.
        }

        if (opcion == 4) // DIVIDIR 2 NÚMEROS
        {
            cout << "**********DIVISION TOTAL DE 2 NUMEROS **********" << endl;

            if (second == 0)
            {
                cout << "INDETERMINADO" << endl;
            }
            else 
            {
                result = first / second; // DIVISIÓN.
            }
        }

        if (opcion == 5) // SUMAR 3 NÚMEROS
        {
            cout << "********** SUMA TOTAL DE 3 NUMEROS **********" << endl;
            result = first + second + third; // SUMA.
        }

        if (opcion == 6) // RESTAR 3 NÚMEROS
        {
            cout << "********** RESTA TOTAL DE 3 NUMEROS **********" << endl;
            result = first - second - third; // RESTA.
        }

        if (opcion == 7) // MULTIPLICAR 3 NÚMEROS
        {
            cout << "********** MULTIPLICACION TOTAL DE 3 NUMEROS **********" << endl;
            result = first * second * third; // MULTIPLICACIÓN.
        }

        if (opcion == 8) // DIVIDIR 3 NÚMEROS
        {
            cout << "**********DIVISION TOTAL DE 3 NUMEROS **********" << endl;
            result = first / second / third; // DIVISIÓN.
        }

        cout << result;

        cin.ignore();

        cin.get(); // * NOTA A CONSIDERAR.

        return 0;
}

    // CÓMO OBTENER EL VALOR ABSOLUTO ENTRE ESTOS NÚMEROS...

       // printf("El valor absoluto de un numero es %g y el de otro es %g", fabs(number), fabs(number2)); // VALOR ABSOLUTO DE UN NÚMERO.

       // printf("La raiz cuadrada de un numero es %g", sqrt(PI)); // RAÍZ CUADRADA DE UN NÚMERO.

       // printf("El numero elevado a la potencia de otro numero es: %g", pow(number, number2)); // POTENCIA DE UN NÚMERO.

       // printf("El coseno de PI es: %g", cos(PI)); // COSENO DE UN NÚMERO PI (3.14159).

       // printf("El seno de PI es: %g", atan(PI)); // SENO DE UN NÚMERO PI (3.14159).


       // return 0;

