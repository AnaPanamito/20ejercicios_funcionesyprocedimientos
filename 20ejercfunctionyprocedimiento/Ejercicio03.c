#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y que seran definidas mas adelante 
int multiplicar(int a, int b);
int potencia(int base, int exponente);
void mostrar_potencia(int base, int exponente);
// Función para multiplicar dos números usando sumas sucesivas
int multiplicar(int a, int b) {
    int resultado = 0; //inicializa la variable resultado en 0 para acumular el resultado de la multiplicación.
    for (int i = 0; i < b; i++) {  //se repite b veces.
        resultado += a; //suma 'a' a resultado, simulando la multiplicación.
    }
    return resultado; //devuelve el resultado de la multiplicación.
}

// Función para calcular la potencia usando multiplicaciones sucesivas
int potencia(int base, int exponente) {
    int resultado = 1; //inicializa resultado en 1, ya que cualquier número elevado a la potencia 0 es 1.
    for (int i = 0; i < exponente; i++) { //se repite exponente veces.
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

// Función para mostrar el cálculo de la potencia en el formato solicitado
void mostrar_potencia(int base, int exponente) {
    printf("%d^%d = ", base, exponente);
    for (int i = 0; i < exponente; i++) { //recorre desde 0 hasta exponente - 1.
        printf("%d", base);
        if (i < exponente - 1) {
            printf(" * "); // añade " * " entre las bases, excepto después de la última base.
        }
    }
    int resultado = potencia(base, exponente);
    printf(" = %d\n", resultado);
}
int main() {
    int base, exponente;
    printf("\t\t----3. POTENCIA MEDIANTE SUMAS SUCESIVAS----\n");
    // Solicitar al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    // Mostrar la potencia calculada
    mostrar_potencia(base, exponente);
    
    return 0;
}
/*El bucle for es una estructura repetitiva que se utiliza cuando se conoce de antemano 
el número de iteraciones que se desean realizar. */