#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
double producto_serie_fraccionaria(int n);
void mostrar_producto_serie(int n);

// Función para calcular el producto de los primeros n términos de una serie fraccionaria
double producto_serie_fraccionaria(int n) {
    double producto = 1.0;
    
    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i;
    }
    
    return producto;
}

// Función para mostrar el producto de la serie en el formato solicitado
void mostrar_producto_serie(int n) {
    double producto = producto_serie_fraccionaria(n);
    
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            printf(" * ");
        }
        printf("1/%d", i);
    }
    
    printf(" = %.10f\n", producto);
}
int main() {
    int n;
    printf("\t\t----17. PRODUCTO DE UNA SERIE DE NUMEROS FRACTORIANOS:----\n");
    // Solicitar al usuario que ingrese el número de términos
    printf("Ingrese un numero para la serie fraccionaria: ");
    scanf("%d", &n);
    
    // Mostrar el producto de los primeros n términos de la serie fraccionaria
    mostrar_producto_serie(n);
    
    return 0;
}