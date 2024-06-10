#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int sumarCubosHastaN(int n);
void imprimirSumaCubos(int n, int suma);
// Función para calcular la suma de los cubos de los primeros n números
int sumarCubosHastaN(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i * i * i;  // Sumar el cubo del número actual
        i++;
    }

    return suma;
}

// Procedimiento para imprimir la suma de los cubos de los primeros n números
void imprimirSumaCubos(int n, int suma) {
    printf("Si n = %d, suma = ", n);

    int i = 1;
    while (i <= n) {
        printf("%d^3", i);
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
    printf("\t\t----15. SUMA DE LOS CUBOS DE LOS PRIMEROS N NUMEROS:----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = sumarCubosHastaN(n);
    imprimirSumaCubos(n, suma);

    return 0;
}