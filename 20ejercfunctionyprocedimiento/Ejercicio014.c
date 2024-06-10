#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int sumarCuadradosHastaN(int n);
void imprimirSumaCuadrados(int n, int suma);
// Función para calcular la suma de los cuadrados de los primeros n números
int sumarCuadradosHastaN(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i * i;  // Sumar el cuadrado del número actual
        i++;
    }

    return suma;
}

// Procedimiento para imprimir la suma de los cuadrados de los primeros n números
void imprimirSumaCuadrados(int n, int suma) {
    printf("Si n = %d, suma = ", n);

    int i = 1;
    while (i <= n) {
        printf("%d^2", i);
        if (i < n) {
            printf(" + ");
        } else {
            printf(" = %d\n", suma);
        }
        i++;
    }
}

int main() {
    int n;
    printf("\t\t----14. SUMAS DE LOS CUADRADOS DE LOS PRIMEROS N NUMEROS:----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = sumarCuadradosHastaN(n);
    imprimirSumaCuadrados(n, suma);

    return 0;
}