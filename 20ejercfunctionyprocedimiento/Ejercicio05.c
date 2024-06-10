#include <stdio.h>
//Declaracion de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int fibonacci(int n);
void imprimirSerie(int n);

// Función para calcular el Fibonacci
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Procedimiento para imprimir los n elementos de la serie de Fibonacci
void imprimirSerie(int n) {
    printf("Serie de Fibonacci: ");
    
    for (int i = 0; i < n; i++) {
        int numero = fibonacci(i);
        printf("%d", numero);
        
        if (i != n - 1)
            printf(", ");
    }
    
    printf("\n");
}

int main() {
    int n;
    printf("\t\t----5. SERIE FIBONACCI ----\n");
    printf("Ingrese la cantidad de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);
    
    imprimirSerie(n);
    
    return 0;
}
