#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int sumarSerieAritmetica(int n);
void imprimirSuma(int n, int suma);
// Función para calcular la suma de los primeros n términos de una serie aritmética
int sumarSerieAritmetica(int n) {
    int suma = 0;
    int i = 1;
    
    while (i <= n) {
        suma += i;
        i++;
    }
    
    return suma;
}

// Procedimiento para imprimir la suma de los primeros n términos de una serie aritmética
void imprimirSuma(int n, int suma) {
   
    int i = 1;
    while (i <= n) {
        printf("%d", i);
        if (i != n) {
            printf(" + ");
        } else {
            printf(" = %d\n", suma);
        }
        i++;
    }
}

int main() {
    int n;
    printf("\t\t----7. SUMA DE UNA SERIE ARITMETICA ----\n");
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);
    
    int suma = sumarSerieAritmetica(n);
    imprimirSuma(n, suma);
    
    return 0;
}