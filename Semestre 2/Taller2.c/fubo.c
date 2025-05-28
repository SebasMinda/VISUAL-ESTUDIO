//sebastián minda
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    // registro equipos
    char equipos[4][30];
    int conteo = 1;
    for (int i = 0; i < 4; i++)
    {
        printf("\ningrese el nombre del equipo %d: ", conteo);
        scanf("%29s", &equipos[i][30]);
        conteo += 1;
    }
    // resultados partidos y puntos (if)y diferencia goles
    int puntosequipos[4]={0,0,0,0};
    int golequipo[4]={0,0,0,0};
    int golmetidos[4]={0,0,0,0};

    // partido1 e1 e2
    int cont1=0, cont2=1;
    int resultadosequipos [4][4];
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    cont2+=1;
    // partido1 e1 e3
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    cont2+=1;
    // partido1 e1 e4
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    cont2=2;
    cont1=1;
    // partido1 e2 e3
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    cont2+=1;
    // partido1 e2 e4
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    cont1=2;
    cont2=3;
    // partido1 e3 e4
    printf("\ningrese el resultado del partido del equipo %d y del equipo %d\n", cont1+1, cont2+1);
    printf("Resultado equipo %d: ", cont1+1);
    scanf("%d", &resultadosequipos[cont1][cont2]);
    golequipo[cont1]=resultadosequipos[cont1][cont2];
    golmetidos[cont2]=resultadosequipos[cont1][cont2];
    printf("Resultado equipo %d: ", cont2+1);
    scanf("%d", &resultadosequipos[cont2][cont1]);
    golequipo[cont2]=resultadosequipos[cont2][cont1];
    golmetidos[cont1]=resultadosequipos[cont1][cont2];
    if (resultadosequipos[cont1][cont2]>resultadosequipos[cont2][cont1])
    {
        puntosequipos [cont1]+=3;
        puntosequipos [cont2]+=1;
    }
    else
    {
        puntosequipos [cont2]+=3;
        puntosequipos [cont1]+=1;
    }
    //puntaje equipos
    for (int i = 0; i < 4; i++)
    {        
        printf("\npuntaje del equipo %d es de: %d\n", i+1, puntosequipos[i]);
    }
    //gol diferencia
    int goldiferencia[4];    
    for (int i = 0; i < 4; i++)
    {
        printf("\nEquipo %d", i+1);
        printf("Goles anotados: %d", golequipo[i]);
        printf("\tGoles del equipo contrario: %d", golmetidos[i]);
        goldiferencia[i]=golequipo[i]-golmetidos[i];
        printf("\tGol Diferencia: %d\n", goldiferencia[i]);
    }  
    return 0;
}
