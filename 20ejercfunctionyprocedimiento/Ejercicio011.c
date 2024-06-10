#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int calcularMCD(int num1, int num2);
void imprimirMCD(int num1, int num2, int mcd);
// Función para calcular el MCD de dos números
int calcularMCD(int num1, int num2) {
    int menor = (num1 < num2) ? num1 : num2;  // Encontrar el menor de los dos números

    // Iterar desde el menor de los números hasta 1
    for (int i = menor; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            return i;  // Si i es divisor de ambos números, es el MCD
        }
    }

    // Si no se encontró un divisor común, el MCD es 1
    return 1;
}

// Procedimiento para imprimir el MCD de dos números
void imprimirMCD(int num1, int num2, int mcd) {
    printf("MCD de %d y %d es %d\n", num1, num2, mcd);
}

int main() {
    int num1, num2;
    printf("\t\t----11. Encontrar el MCD (Maximo Comun Divisor) ----\n");
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &num1, &num2);
    

    int mcd = calcularMCD(num1, num2);
    imprimirMCD(num1, num2, mcd);

    return 0;
}