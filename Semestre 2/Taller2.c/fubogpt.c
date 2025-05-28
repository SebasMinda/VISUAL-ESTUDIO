// sebastián minda
#include <stdio.h>
#include <string.h>
#define N 4
int status = 0;
int main(void)
{
    // Registro de nombres de equipos
    char equipos[N][30];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese el nombre del equipo %d: ", i + 1);
        scanf("%29s", equipos[i]);
    }

    // Estadísticas de cada equipo
    int puntosEquipos[N] = {0, 0, 0, 0}; // puntos obtenidos
    int golesFavor[N] = {0, 0, 0, 0};    // goles a favor
    int golesContra[N] = {0, 0, 0, 0};   // goles en contra
    int resultadoPartido[N][N];          // matriz de resultados

    int equipo1 = 0, equipo2 = 1;

    // Registrar los 6 partidos
    // Partido 1: equipos[0] vs equipos[1]
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un numero entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada invalida. Por favor, ingrese un numero entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un numero entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);

    // Acumular goles y puntos
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];

    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
    {
        puntosEquipos[equipo1] += 3;
    }
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
    {
        puntosEquipos[equipo2] += 3;
    }
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Repetir los bloques anteriores para los demás partidos:
    // Partido 2: equipos[0] vs equipos[2]
    equipo1 = 0;
    equipo2 = 2;
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];
    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
        puntosEquipos[equipo1] += 3;
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
        puntosEquipos[equipo2] += 3;
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Partido 3: equipos[0] vs equipos[3]
    equipo1 = 0;
    equipo2 = 3;
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];
    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
        puntosEquipos[equipo1] += 3;
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
        puntosEquipos[equipo2] += 3;
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Partido 4: equipos[1] vs equipos[2]
    equipo1 = 1;
    equipo2 = 2;
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];
    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
        puntosEquipos[equipo1] += 3;
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
        puntosEquipos[equipo2] += 3;
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Partido 5: equipos[1] vs equipos[3]
    equipo1 = 1;
    equipo2 = 3;
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];
    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
        puntosEquipos[equipo1] += 3;
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
        puntosEquipos[equipo2] += 3;
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Partido 6: equipos[2] vs equipos[3]
    equipo1 = 2;
    equipo2 = 3;
    printf("\nPartido: %s vs %s\n", equipos[equipo1], equipos[equipo2]);
    printf("Goles de %s: ", equipos[equipo1]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo1][equipo2]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo1][equipo2] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo1][equipo2] < 0);
    printf("Goles de %s: ", equipos[equipo2]);
    do
    {
        status = scanf("%d", &resultadoPartido[equipo2][equipo1]);
        if (status == 0)
        {
            printf("Entrada inválida. Por favor, ingrese un número entero.\n");
            while (getchar() != '\n')
                ; // Limpiar el buffer de entrada
        }
        else if (resultadoPartido[equipo2][equipo1] < 0)
        {
            printf("Los goles no pueden ser negativos. Por favor, ingrese un número entero positivo.\n");
        }
    } while (status == 0 || resultadoPartido[equipo2][equipo1] < 0);
    golesFavor[equipo1] += resultadoPartido[equipo1][equipo2];
    golesContra[equipo2] += resultadoPartido[equipo1][equipo2];
    golesFavor[equipo2] += resultadoPartido[equipo2][equipo1];
    golesContra[equipo1] += resultadoPartido[equipo2][equipo1];
    if (resultadoPartido[equipo1][equipo2] > resultadoPartido[equipo2][equipo1])
        puntosEquipos[equipo1] += 3;
    else if (resultadoPartido[equipo2][equipo1] > resultadoPartido[equipo1][equipo2])
        puntosEquipos[equipo2] += 3;
    else
    {
        puntosEquipos[equipo1] += 1;
        puntosEquipos[equipo2] += 1;
    }

    // Mostrar tabla con diferencia de goles
    int diferenciaGoles[N];
    printf("\n%-15s %4s %4s %4s %4s\n", "Equipo", "Pts", "GF", "GC", "Dif");
    for (int i = 0; i < N; i++)
    {
        diferenciaGoles[i] = golesFavor[i] - golesContra[i];
        printf("%-15s %4d %4d %4d %4d\n",
               equipos[i], puntosEquipos[i], golesFavor[i], golesContra[i], diferenciaGoles[i]);
    }

    // Determinar finalistas
    

    int finalista1 = 0, finalista2 = 1;

    for (int i = 1; i < N; i++)
    {
        int dif_i = golesFavor[i] - golesContra[i];
        int dif1 = golesFavor[finalista1] - golesContra[finalista1];
        if (puntosEquipos[i] > puntosEquipos[finalista1] ||
            (puntosEquipos[i] == puntosEquipos[finalista1] && dif_i > dif1))
        {
            finalista2 = finalista1;
            finalista1 = i;
        }
        else if (i != finalista1)
        {
            int dif2 = golesFavor[finalista2] - golesContra[finalista2];
            if (puntosEquipos[i] > puntosEquipos[finalista2] ||
                (puntosEquipos[i] == puntosEquipos[finalista2] && dif_i > dif2))
            {
                finalista2 = i;
            }
        }
    }

    printf("\n--> Finalistas:\n  1ero: %s\n  2do: %s\n",
           equipos[finalista1], equipos[finalista2]);

    return 0;
}
