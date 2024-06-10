#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int calcularFactorial(int n);
int sumarFactoriales(int n);
// Función para calcular el factorial de un número
int calcularFactorial(int n) {
    int factorial = 1;
    int i = 1;

    do {
        factorial *= i;
        i++;
    } while (i <= n);

    return factorial;
}

// Función para calcular la suma de los factoriales de los primeros n números
int sumarFactoriales(int n) {
    int suma = 0;
    int i = 1;

    do {
        suma += calcularFactorial(i);
        i++;
    } while (i <= n);

    return suma;
}

// Procedimiento para imprimir la suma de los factoriales de los primeros n números
void imprimirSumaFactoriales(int n, int suma) {
    printf("Si n = %d, suma = ", n);

    int i = 1;
    do {
        printf("%d!", i);
        if (i < n) {
            printf(" + ");
        } else {
            printf(" = %d\n", suma);
        }
        i++;
    } while (i <= n);
}

int main() {
    int n;
    printf("\t\t----20. CALCULAR LA SUMA DE LOS FACTORIALES DE LOS PRIMEROS N NUMEROS:----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = sumarFactoriales(n);
    imprimirSumaFactoriales(n, suma);

    return 0;
}