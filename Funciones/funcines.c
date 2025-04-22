#include <stdio.h>
int menu();
float suma(float a, float b);
float division(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
int validarylimpiar();

int main (int argc, char *argv[]) {
    int c;
    int opc;
    float a, b, resultado;
    opc=menu();
    switch (opc)
    {
    case 1:
        a=validarylimpiar();
        b=validarylimpiar();
        resultado = suma(a, b);
        printf("La suma es: %.2f\n", resultado);
        break;
    case 2:
        a=validarylimpiar();
        b=validarylimpiar();
        resultado = resta(a, b);
        printf("La resta es: %.2f\n", resultado);
        break;
    case 3:
        printf("Ingrese el primer numero: ");
        scanf("%f", &a);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &b);
        resultado = multiplicacion(a, b);
        printf("La multiplicacion es: %.2f\n", resultado);
        break;
    case 4: 
        printf("Ingrese el primer numero: ");
        scanf("%f", &a);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &b);
        resultado = division(a, b);
        if (b != 0) {
            printf("La division es: %.2f\n", resultado);
        }
        break;
    case 5: 
        printf("Saliendo del programa...\n");
        return 0;   
    default:
        break;
    }

    return 0;
}
int menu(){
    int opc;
    printf("=== MENU DE OPCIONES ===\n");
    printf("Seleccione una de las opciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf(">>>");
    scanf("%d", &opc);
    return opc;
}
float suma(float a, float b){
    float r;
    r = a + b;
    return r;
}
float resta(float a, float b){
    float r;
    r = a - b;
    return r;
}  
float multiplicacion(float a, float b){
    float r;
    r = a * b;
    return r;
}
float division(float a, float b){
    float r;
    if (b!=0) 
    {
       r = a / b;
       return r;
    }
    else
    {
        printf("Error: Division por cero no permitida.\n");
        return 0;
    }
    
    r = a / b;
    return r;
}
int validarylimpiar(){
    int c=0;
    int num;
    do {
        printf("Ingrese el numero: ");
        c=scanf("%d", &num);
        if (c == 0) {
            printf("Entrada invalida. Intente de nuevo.\n");
            while (getchar() != '\n')
                                ;
            
        } else if (num < 0)   
        {
            printf("El numero no puede ser negativo. Intente de nuevo.\n");

        }
        
    }while (c== 0 || num < 0);
    return num;
    } 

