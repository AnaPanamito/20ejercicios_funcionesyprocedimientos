#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int calcularNumeroTriangular(int n);
void imprimirNumeroTriangular(int n);
// Función para calcular el n-ésimo número triangular
int calcularNumeroTriangular(int n) {
    return (n * (n + 1)) / 2;
}

// Procedimiento para imprimir el n-ésimo número triangular
void imprimirNumeroTriangular(int n) {
    int numeroTriangular = calcularNumeroTriangular(n);
    printf("Si n = %d, el numero triangular es: ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" + ");
        } else {
            printf(" = %d\n", numeroTriangular);
        }
    }
}

int main() {
    int n;
    printf("\t\t----19. CALCULAR EL n-esimo NUMERO TRIANGULAR:----\n");
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    imprimirNumeroTriangular(n);

    return 0;
}