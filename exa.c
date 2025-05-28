#include <stdio.h>
#include <string.h>
int opc;
char marca[50][50];
char dueno[50][50];
char placa[20][20];
int cedula[20];
int estado[50];
int count = 0;
int menu()
{
    printf("\nSeleccione una opcion\n");
    printf("1. Registrar Vehiculo\n");
    printf("2. Vender Vehiculo\n");
    printf("3. Buscar vehiculo por numero de cedula\n");
    printf("4. Salir\n");
    printf(">> ");
    scanf("%d", &opc);
    return opc;
}
void registrarVehiculo()
{
   int repetido;
    printf("Registrar Vehiculo seleccionado.\n");
    printf("Ingrese los detalles del vehiculo:\n");
    printf("Nombre del auto: ");
    scanf("%s", &marca[count]);
    printf("Nombre del dueno: ");
    scanf("%s", &dueno[count]);
    printf("Numero de cedula: ");
    scanf("%d", &cedula[count]);
    do {
    repetido = 0;
    printf("Numero de placa: ");
    scanf("%s", &placa[count]);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(placa[count], placa[i]) == 0)
        {
            repetido = 1;
            printf("La placa ya existe, por favor ingrese una placa diferente.\n");
        }
    }
    } while(repetido==1);
    printf("Vehiculo registrado exitosamente:\n");
    estado[count] = 1;
    count++;
}
void venderVehiculo()
{
    char placabuscar[20];
    int encontrado= 0;
    printf("Vender Vehiculo seleccionado.\n");
    printf("Lista de vehiculos disponibles:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\t%s\t%d\t%s\t", marca[i], dueno[i], cedula[i], placa[i]);
        if (estado[i] == 0)
        {
            printf("Vendido.\n", placa[i]);
        }
        else
        {         
            printf("Disponible.\n", placa[i]);
        }
        
    }
     printf("Escriba el numero de placa del auto que desea:\n");
        printf("Numero de placa: ");
        scanf("%s", &placabuscar);
        for (int i = 0; i < count; i++)
        {
        if (strcmp(placabuscar, placa[i]) == 0 && estado[i] == 1)
        {
            encontrado = 1;
            printf("Vehiculo vendido exitosamente.\n");
            estado[i] = 0;
            break;
            
        }
        else if (strcmp(placabuscar, placa[i]) == 0 && estado[i] == 0)
        {
            printf("Vehiculo ya vendido.\n");
            return;
        }
        } 
        if (encontrado == 0)
        {
            printf("Vehiculo no encontrado.\n");
            return;
        }
}
void buscarcedula ()
{   
    int cedulabuscar;
    int encontrado = 0;
    printf("Ingrese el numero de cedula a buscar: ");
    scanf("%d", &cedulabuscar);
    for (int i = 0; i < count; i++)
    {
        if (cedulabuscar == cedula[i])
        {
            encontrado = 1;
            printf("\nVehiculo encontrado:\n");
            printf("Marca: %s\n", marca[i]);
            printf("Propietario: %s\n", dueno[i]);
            printf("Placa: %s\n", placa[i]);
            printf("Estado: ");
            if (estado[i] == 1)
            {
                printf("Disponible\n");
            }
            else
            {
                printf("Vendido\n");
            }
        }
    }
    if (encontrado == 0)
    {
        printf("No se encontro ningun vehiculo con la cedula %d.\n", cedulabuscar);
    }
    return;
}
int main(int argc, char *argv[])
{
    int opcion;
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            registrarVehiculo();
            break;
        case 2:
            venderVehiculo();
            break;
        case 3:
            buscarcedula ();
            break;
        case 4:
            printf("Saliendo del programa...\n");
            return 0;
        default:
            printf("Opcion no valida, por favor intente de nuevo.\n");
            break;
        }

    } while (opcion != 4);
}