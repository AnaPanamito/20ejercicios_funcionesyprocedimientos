#include <stdio.h>
// Declaración de funciones-> con esto informo al compilador que estas funciones existen y seran definidas mas adelante 
int es_primo(int numero);
void contar_primos(int n);

// Función para determinar si un número es primo
int es_primo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Función para contar y mostrar los números primos hasta n
void contar_primos(int n) {
    int cuenta_primos = 0;
    
    printf("Numeros primos hasta %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (es_primo(i)) {
            if (cuenta_primos > 0) {
                printf(", ");
            }
            printf("%d", i);
            cuenta_primos++;
        }
    }
    
    printf("\nTotal de numeros primos hasta %d: %d\n", n, cuenta_primos);
}
int main() {
    int n;
    printf("\t\t----18. CONTAR LOS NUMEROS PRIMOS HASTA N:----\n");
    // Solicitar al usuario que ingrese un numero 
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    // Contar y mostrar los números primos hasta n
    contar_primos(n);
    
    return 0;
}