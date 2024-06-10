#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int sumarImparesHastaN(int n);
void imprimirSumaImpares(int n, int suma);
// Función para calcular la suma de los números impares hasta n
int sumarImparesHastaN(int n) {
    int suma = 0;
    
    // desde 1 hasta n con un incremento de 2
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }
    
    return suma;
}

// Procedimiento para imprimir la suma de los números impares hasta n
void imprimirSumaImpares(int n, int suma) {
    printf("Si n = %d, suma = ", n);
    
    // Imprimir los números impares y la suma
    int contador = 0;
    for (int i = 1; i <= n; i += 2) {
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
    printf("\t\t----12. SUMAR LOS NUMEROS IMPARES HASTA N ----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    int suma = sumarImparesHastaN(n);
    imprimirSumaImpares(n, suma);
    
    return 0;
}