#include <stdio.h>

void ingresarCorredor(char nombre[30], int numeroSalida[5], float tiempos[5], int usados[], int i);
int numeroYaUsado(int usados[], int cantidad, int valor);
int leerNumeroSalida(int usados[]);
float leerTiempo();
void limpiarBuffer();
void mostrarResultados(char nombres[5][30], int numeroSalidas[5], float tiempos[5]);

int main() {
    char nombres[5][30];
    int numeroSalidas[5];
    float tiempos[5];
    int usados[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++) {
        ingresarCorredor(nombres[i], numeroSalidas, tiempos, usados, i);
    }

    mostrarResultados(nombres, numeroSalidas, tiempos);

    return 0;
}

void ingresarCorredor(char nombre[30], int numeroSalidas[5], float tiempos[5], int usados[], int i) {
    printf("\nIngrese el nombre del corredor %d: ", i + 1);
    fflush(stdin);
    fgets(nombre, 30, stdin);

    numeroSalidas[i] = leerNumeroSalida(usados);
    usados[numeroSalidas[i] - 1] = 1;

    tiempos[i] = leerTiempo();
}

int leerNumeroSalida(int usados[]) {
    int valor;
    while (1) {
        printf("Ingrese el numero de salida (1 al 5, sin repetir): ");
        if (scanf("%d", &valor) != 1 || valor < 1 || valor > 5 || numeroYaUsado(usados, 5, valor)) {
            printf("Entrada invalida o repetida. Intente de nuevo.\n");
            limpiarBuffer();
        } else {
            limpiarBuffer();
            return valor;
        }
    }
}

float leerTiempo() {
    float valor;
    while (1) {
        printf("Ingrese el tiempo en segundos: ");
        if (scanf("%f", &valor) != 1 || valor <= 0) {
            printf("Tiempo invalido. Intente de nuevo.\n");
            limpiarBuffer();
        } else {
            limpiarBuffer();
            return valor;
        }
    }
}

int numeroYaUsado(int usados[], int cantidad, int valor) {
    if (valor < 1 || valor > cantidad) return 1;
    return usados[valor - 1];
}

void limpiarBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void mostrarResultados(char nombres[5][30], int numeroSalidas[5], float tiempos[5]) {
    int pos[5] = {0, 1, 2, 3, 4};
    int i, j, temp;

    // Ordenar por tiempo (desempate por mayor numero de salida)
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (tiempos[pos[i]] > tiempos[pos[j]] ||
               (tiempos[pos[i]] == tiempos[pos[j]] && numeroSalidas[pos[i]] < numeroSalidas[pos[j]])) {
                temp = pos[i];
                pos[i] = pos[j];
                pos[j] = temp;
            }
        }
    }

    printf("\n--- CLASIFICACION FINAL ---\n");
    for (i = 0; i < 5; i++) {
        if (i == 0)
            printf("ORO: %sTiempo: %.2f s - Salida #%d\n", nombres[pos[i]], tiempos[pos[i]], numeroSalidas[pos[i]]);
        else if (i == 1)
            printf("PLATA: %sTiempo: %.2f s - Salida #%d\n", nombres[pos[i]], tiempos[pos[i]], numeroSalidas[pos[i]]);
        else if (i == 2)
            printf("BRONCE : %sTiempo: %.2f s - Salida #%d\n", nombres[pos[i]], tiempos[pos[i]], numeroSalidas[pos[i]]);
        else
            printf("%sTiempo: %.2f s - Salida #%d\n", nombres[pos[i]], tiempos[pos[i]], numeroSalidas[pos[i]]);
    }
}