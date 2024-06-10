#include <stdio.h>

// Declaración de funciones -> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int invertir_numero(int numero);
void mostrar_inverso(int numero);

// Función para invertir un número
int invertir_numero(int numero) {
    int inverso = 0; //inicializa una variable inverso en 0 para almacenar el número invertido.
    
    while (numero > 0) { //mientras 'numero' sea mayor que 0.
        inverso = inverso * 10 + numero % 10; //actualizamos inverso multiplicando por 10 y sumando el último dígito de numero.
        numero /= 10; //elimina el último dígito de numero.
    }
    
    return inverso; //devuelve el número invertido.
}

// Funcion para mostrar el numero inverso en el formato solicitado
void mostrar_inverso(int numero) {
    int inverso = invertir_numero(numero); //llama a la función invertir_numero para obtener el número invertido y lo almacena en inverso.
    
    printf("%d -> %d\n", numero, inverso);
}
int main() {
    int numero;
    printf("\t\t----2. INVERSO DE UN NUMERO ----\n");
    // Solicitar al usuario que ingrese un numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Mostrar el inverso del numero
    mostrar_inverso(numero);
    
    return 0;
}
/*El bucle while es adecuado porque no se sabe cuántas iteraciones serán 
necesarias y eso va ir dependiendo del número de dígitos del número, y este bucle continuará
 hasta que numero*/ 