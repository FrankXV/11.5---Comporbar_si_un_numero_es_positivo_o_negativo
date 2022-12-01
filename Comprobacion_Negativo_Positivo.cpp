/* Problema 2: Comprobar si un numero es positivo o negativo
 *
 *
 *
 *
 * */


#include <stdio.h>

int main() {

    double numero;

    printf("Digite el numero: ");
    scanf("%lf", &numero);

    if ( numero > 0)
    {

        printf("El numero %lf es postivo", numero);

    } else if (numero < 0) {

        printf("El numero %lf es negativo", numero);
    } else {

        printf("El numero digitado es %lf", numero);
    }


    return 0;
}
