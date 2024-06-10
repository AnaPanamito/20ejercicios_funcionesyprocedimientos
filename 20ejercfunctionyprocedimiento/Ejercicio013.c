#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int sumarParesHastaN(int n);
void imprimirSumaPares(int n, int suma);
// Función para calcular la suma de los números pares hasta n
int sumarParesHastaN(int n) {
    int suma = 0;

    // Iterar desde 2 hasta n con un incremento de 2
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    return suma;
}

// Procedimiento para imprimir la suma de los números pares hasta n
void imprimirSumaPares(int n, int suma) {
    printf("Si n = %d, suma = ", n);

    // Imprimir los números pares y la suma
    int contador = 0;
    for (int i = 2; i <= n; i += 2) {
        printf("%d", i);
        contador++;
        if (contador < suma) {
            printf(" + ");
        }
    }

    printf(" = %d\n", suma);
}

int main() {
    int n;
    printf("\t\t----13. SUMAR LOS NUMEROS PARES HASTA N ----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int suma = sumarParesHastaN(n);
    imprimirSumaPares(n, suma);

    return 0;
}