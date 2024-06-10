#include <stdio.h>

// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int cubo(int numero);
int raiz_cubica(int numero);
void mostrar_raiz_cubica(int numero);

// Función para calcular el cubo de un número
int cubo(int numero) {
    return numero * numero * numero; //devuelve el cubo del número recibido como parámetro.
}

// Función para calcular la raíz cúbica usando restas sucesivas
int raiz_cubica(int numero) {
    int resultado = 0;
    
    for (int i = 0; i <= numero; i++) { //va desde 0 hasta numero
        if (cubo(i) > numero) {
            break; //verifica si el cubo de i es mayor que numero; si es así, se rompe el bucle.
        }
        resultado = i; //actualiza el resultado con el valor de i.
    }
    
    return resultado;
}

// Función para mostrar el cálculo de la raíz cúbica en el formato solicitado
void mostrar_raiz_cubica(int numero) {
    int resultado = raiz_cubica(numero); // llama a la función raiz_cubica para obtener el resultado de la raíz cúbica.
    printf("%d^(1/3) = %d\n", numero, resultado);
}
int main() {
    int numero;
    printf("\t\t----4. RADICACION MEDIANTE RESTAS SUCESIVAS----\n");
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Mostrar la raíz cúbica del número
    mostrar_raiz_cubica(numero);
    
    return 0;
}
/*La función raiz_cubica utiliza un bucle for para encontrar el mayor número cuya potencia 
cúbica no exceda el número dado.*/