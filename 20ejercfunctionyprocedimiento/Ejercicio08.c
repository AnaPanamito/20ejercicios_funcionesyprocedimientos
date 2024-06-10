#include <stdio.h>

// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
unsigned long long producto_serie_geometrica(int n, int r); //unsigned nos ndica que la variable solo puede almacenar valores positivos, lo que duplica el rango positivo.
void mostrar_producto_serie(int n, int r);


// Función para calcular el producto de los primeros n términos de una serie geométrica
unsigned long long producto_serie_geometrica(int n, int r) {  
    unsigned long long producto = 1; //long long nos Entero largo extendido (generalmente 8 bytes).
    int termino = 1;
    int contador = 0;
    
    while (contador < n) {
        producto *= termino;
        termino *= r;
        contador++;
    }
    
    return producto;
}

// Función para mostrar el producto de la serie en el formato solicitado
void mostrar_producto_serie(int n, int r) {
    unsigned long long producto = producto_serie_geometrica(n, r);
    int termino = 1;
    
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", termino);
        termino *= r;
    }
    
    printf(" = %llu\n", producto);
}
int main() {
    int n, r;
    printf("\t\t----8. PRODUCTO DE UNA SERIE GEOMETRICA ----\n");
    // Solicitar al usuario que ingrese el número de términos y la razón común
    printf("Ingrese el numero de terminos de la serie geometrica: ");
    scanf("%d", &n);
    printf("Ingrese la razon comun de la serie geometrica: ");
    scanf("%d", &r);
    
    // Mostrar el producto de los primeros n términos de la serie geométrica
    mostrar_producto_serie(n, r);
    
    return 0;
}
