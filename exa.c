#include <stdio.h>
int opc;
int menu()
{
    printf("Seleccione una opcion\n");
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
    int count = 0;
    printf("Registrar Vehiculo seleccionado.\n");
    printf("Ingrese los detalles del vehiculo:\n");
    printf("Nombre del auto: ");
    char marca[50][50];
    scanf("%s", &marca[count]);
    printf("Nombre del dueno: ");
    char dueno[50][50];
    scanf("%s", &dueno[count]);
    printf("Numero de cedula: ");
    int cedula[20];
    scanf("%s", &cedula[count]);
    printf("Numero de placa: ");
    char placa[20][20];
    scanf("%s", &placa[count]);
    printf("Vehiculo registrado exitosamente:\n");
    int estado[50];
    estado[count] = 1;
    count++;
}
void venderVehiculo()
{
    int estado[50];
    int count;
    char Marca[50][50], Dueno[50][50], Placa[50][50];
    int Cedula[20];
    for (int i = 0; i < count; i++)
    {
        printf("Vender Vehiculo seleccionado.\n");
        printf("Lista de vehiculos disponibles:\n");
        printf("%s\t%s\t%d\t%s\n", Marca[count], Dueno[count], Cedula[count], Placa[count]);
        printf("Escriba el numero de placa del auto que desea:\n");
        printf("Numero de placa: ");
        char placa[50][50];
        scanf("%s", &placa[count]);
        printf("Vehiculo vendido exitosamente.\n");
        estado[count] = 0;
    }
}
void buscarcedula ()
{
    int cedula;
    printf("Ingrese el numero de cedula a buscar: ");
    scanf("%d", &cedula);
   
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
            printf("Buscar vehiculo por numero de cedula\n");
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