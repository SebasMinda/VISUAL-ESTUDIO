#include <stdio.h>
int menu();
int main(int argc, char *argv[])
{
    int x=menu();
    return 0;
}

int menu()
{
    int opc;
    printf("Seleccione una opcion\n");
    printf("1.Ingresar Estudiante\n");
    printf("2.Ingresar Materia\n");
    printf("3.Ingresar notas\n");
    printf("4.Promedio por estudiante\n");
    printf("5.Promedio por materia\n");
    printf("6.Notas altas y bajas por estudiante\n");
    printf("7.Notas altas y bajas por materia\n");
    printf("8.Salir");
    printf(">> ");
    scanf("%d", &opc);
    return opc;
}

void ingresarEstudiante(char nombre[30], int conte)
{
    if (conte < 5)
    {
        printf("Ingrese el nombre del estudiante %d: ", conte);
        fflush(stdin);
        fgets(nombre, 30, stdin);
    }
    else
    {
        printf("No se puede ingresar mas de 5 estudiantes\n");
    }
}

void ingresarMateria(char materia[30], int contm)
{
    if (contm < 3)
    {
        printf("Ingrese el nombre de la materia %d: ", contm);
        fflush(stdin);
        fgets(materia, 30, stdin);
    }
    else
    {
        printf("No se puede ingresar mas de 5 estudiantes\n");
    }
}

void ingresarNotas(int i, char nombres[5][30], char materias[5][30],
                   float NM1[5], float NM2[5], float NM3[5], int cont)
{
    printf("Ingrese las notas del estudiante %s: ", nombres[i]);
    cont = 0;
    if (cont > 0)
    {
        printf("Nota materia %s: ", materias[0]);
        scanf("%f", &NM1[i]);
    }
    if (cont > 1)
    {
        printf("Nota materia %s: ", materias[1]);
        scanf("%f", &NM2[i]);
    }
    if (cont > 2)
    {
        printf("Nota materia %s: ", materias[2]);
        scanf("%f", &NM3[i]);
    }
}
void imprimirpromedioestudiante(float NM1[5], float NM2[5], float NM3[5], int i, char nombres[5][30], int cont)
{
    float promedio = 0;
    promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
    for (int i = 0; i < 5; i++)
    {
        if (cont > 0)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }
        if (cont > 1)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }
        if (cont > 2)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }

        printf("El promedio del estudiante %s es: %.2f\n", nombres[i], promedio);
    }
}
void imprimirpromediomateria(float NM1[5], float NM2[5], float NM3[5], int i, char materias[5][30], int cont)
{
    float promedio = 0;
    promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
    for (int i = 0; i < 5; i++)
    {
        if (cont > 0)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }
        if (cont > 1)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }
        if (cont > 2)
        {
            promedio = (NM1[i] + NM2[i] + NM3[i]) / 3;
        }

        printf("El promedio de la materia %s es: %.2f\n", materias[i], promedio);
    }
}