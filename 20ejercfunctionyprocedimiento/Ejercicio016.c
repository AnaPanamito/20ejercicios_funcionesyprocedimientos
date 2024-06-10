#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
double suma_serie_fraccionaria(int n);
void mostrar_suma_serie(int n);

// Función para calcular la suma de los primeros n términos de una serie fraccionaria
double suma_serie_fraccionaria(int n) {
    double suma = 0.0;
    
    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }
    
    return suma;
}

// Función para mostrar la suma de la serie en el formato solicitado
void mostrar_suma_serie(int n) {
    double suma = suma_serie_fraccionaria(n);
    
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" + ");
        }
        printf("1/%d", i);
    }
    
    printf(" = %.5f\n", suma);
}
int main() {
    int n;
    printf("\t\t----16. SUMA DE UNA SERIE DE NUMEROS FRACTORIANOS:----\n");
    // Solicitar al usuario que ingrese el número de términos
    printf("Ingrese el numero de terminos de la serie fraccionaria: ");
    scanf("%d", &n);
    
    // Mostrar la suma de los primeros n términos de la serie fraccionaria
    mostrar_suma_serie(n);
    
    return 0;
}