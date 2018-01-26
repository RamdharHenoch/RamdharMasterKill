//Ramdhar Henoch Ortega Iglesias
//Tarea 8
//Ingresar cinco numeros e imprimir el mayor.
#include <stdio.h>

int main() {
    int mayor=0;
    float N=5, aux;
    float nums[5];
    
    int i;
    
    for (i=0; i <N; i++) {
        
        printf("Ingresa una cantidad : ");
        scanf("%f", & aux);
        nums [i]=aux;
    }
    if ( aux >mayor) {
        mayor=aux;
    }
    
    printf("\nLa cantidad mayor es: %d\n", mayor);
    
    return 0;
}
