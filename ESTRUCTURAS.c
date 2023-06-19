#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Alumno
    {
        char nombre[100];
        char direccion[100];
        char carrera[100];
        int edad;
        float promedio;
    } alumno[6];

    for (int i = 1; i < 6; i++)
    {
        printf("Escriba el nombre del alumno %d:\n", i);
        fflush(stdin);
        fgets(alumno[i].nombre, sizeof(alumno[i].nombre), stdin);

        printf("Escriba la direccion del alumno %d:\n", i);
        fflush(stdin);
        fgets(alumno[i].direccion, sizeof(alumno[i].direccion), stdin);

        printf("Escriba la carrera del alumno %d:\n", i);
        fflush(stdin);
        fgets(alumno[i].carrera, sizeof(alumno[i].carrera), stdin);

        printf("Escriba la edad del alumno %d:\n", i);
        scanf("%d", &alumno[i].edad);

        printf("Escriba el promedio del alumno %d:\n", i);
        scanf("%f", &alumno[i].promedio);

        fflush(stdin);
    }

    for (int i = 1; i < 6; i++)
    {
        printf("\nDatos del alumno %d:\n", i);
        printf("Nombre: %s", alumno[i].nombre);
        printf("Direccion: %s", alumno[i].direccion);
        printf("Carrera: %s", alumno[i].carrera);
        printf("Edad: %d\n", alumno[i].edad);
        printf("Promedio: %.2f\n", alumno[i].promedio);
    }

    return 0;
}