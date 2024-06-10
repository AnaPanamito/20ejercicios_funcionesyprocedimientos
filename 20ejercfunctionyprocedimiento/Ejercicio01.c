#include <stdio.h>
//Declaracion de funciones -> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int sumar_digitos (int numero); 
void mostras_suma(int numero); // una funcion void como tipo de retorno, siginifica que esta funcion no devuelve ningun valor 

// Funcion para calcular la suma de los digitos de un numero 
int sumar_digitos (int numero){
    int suma = 0; // inicializa una variable 'suma' en 0 para acumular la suma de los digitos 
    while (numero > 0){  // mientras el numero sea mayor que 0 
        suma += numero %10; // añade el ultimo digito de 'numero' a 'suma' utilizando el operador %, que obtiene el resto de la división por 10.
        numero /= 10;  // elimina el ultimo digito de numero dividiendolo por 10.
    }
    return suma; // devuelve la suma de los digitos 

}
// Funcion para mostrar la suma de los digitos 
void mostrar_suma(int numero) {
    int digitos[10];  // Array para almacenar hasta 10 dígitos
    int num_digitos = 0; // inicializar un contador de digitos en 0
    int temp = numero;  // copiar el valor de 'numero' en una variable temporal 
    
    // Descomponer el numero en sus dígitos y almacenarlos en el array
    while (temp > 0) {  // mientras el temporal sea mayor que 0 
        digitos[num_digitos] = temp % 10; // almacena el ultimo digito de temporal en el array de digitos 
        temp /= 10; // elimina el ultimo digito de temporal dividiendolo por 10
        num_digitos++; // incrementa el valor de los digitos 
    }
    
    // Mostrar los dígitos en el formato solicitado
    printf("%d -> ", numero);
    for (int i = num_digitos - 1; i >= 0; i--) { // recorre el array 'dgitos' desde el ultimo hasta el primero 
        printf("%d", digitos[i]); // muestra cada digito 
        if (i > 0) {
            printf(" + "); //  añade " + " entre los dígitos excepto después del último dígito.
        }
    }
    
    int suma = sumar_digitos (numero); //llama a la función sumar_digitos para obtener la suma de los dígitos.
    printf(" = %d\n", suma);
}

int main() {
    int numero;
    printf("\t\t----1. SUMA DE LOS DIGITOS DE UN NUMERO----\n");
    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    // Mostrar la suma de los dígitos del número
    mostrar_suma(numero);
    
    return 0;
}

