#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int calcularFactorial(int n);
void imprimirFactorial(int n, int factorial);
// Función para calcular el factorial de un número
int calcularFactorial(int n) {
    int factorial = 1;
    
    // Calcular el factorial multiplicando desde n hasta 1
    for (int i = n; i >= 1; i--) {
        factorial *= i;
    }
    
    return factorial;
}

// Procedimiento para imprimir el factorial de un número
void imprimirFactorial(int n, int factorial) {
    printf("%d! = ", n);
    
    // Imprimir los factores
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }
    
    printf(" = %d\n", factorial);
}

int main() {
    int n;
    printf("\t\t----6. FACTORIAL DE UN NUMERO ----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    int factorial = calcularFactorial(n);
    imprimirFactorial(n, factorial);
    
    return 0;
}