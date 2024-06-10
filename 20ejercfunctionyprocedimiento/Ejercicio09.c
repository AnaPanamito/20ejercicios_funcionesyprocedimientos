#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int contarDigitos(int numero);
void imprimirNumeroDigitos(int numero, int digitos);
// Función para contar el número de dígitos de un número
int contarDigitos(int numero) {
    int contador = 0;
    int temp = numero;

    // Recorrer los dígitos del número
    while (temp != 0) {
        temp /= 10;  // Eliminar el dígito menos significativo
        contador++;
    }

    return contador;
}

// Procedimiento para imprimir el número de dígitos de un número
void imprimirNumeroDigitos(int numero, int digitos) {
    printf("%d tiene %d digitos.\n", numero, digitos);
}

int main() {
    int numero;
    printf("\t\t----9. NUMERO DE DIGITOS DE UN NUMERO ----\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    int digitos = contarDigitos(numero);
    imprimirNumeroDigitos(numero, digitos);

    return 0;
}