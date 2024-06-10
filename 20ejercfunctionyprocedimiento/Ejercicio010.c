#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int esPrimo(int numero);
void imprimirEsPrimo(int numero);
// Función para verificar si un número es primo
int esPrimo(int numero) {
    // Los números menores o iguales a 1 no son primos
    if (numero <= 1) {
        return 0;  // 0 representa falso
    }

    // Verificar si el número es divisible entre algún número entre 2 y la raíz cuadrada del número
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;  // 0 representa falso
        }
    }

    // Si no es divisible por ningún número, entonces es primo
    return 1;  // 1 representa verdadero
}

// Procedimiento para imprimir si un número es primo o no
void imprimirEsPrimo(int numero) {
    if (esPrimo(numero)) {
        printf("%d es primo.\n", numero);
    } else {
        printf("%d no es primo.\n", numero);
    }
}

int main() {
    int numero;
    printf("\t\t----10. VERIFICAR SI UN NUMERO ES PRIMO ----\n");
    printf("Ingrese un nmero: ");
    scanf("%d", &numero);

    imprimirEsPrimo(numero);

    return 0;
}