#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Alumno
    {
        char nombre[20];
        char apellido[20];
        char carrera[20];
        float nota1;
        float nota2;
        float nota3;
        float promedio;
    } alumno[4];

    FILE *archivo = fopen("lista.txt", "r");
    if (archivo == NULL)
    {
        printf("No se encontró el archivo.\n");
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        fscanf(archivo, "%s %s %f %f %f", alumno[i].nombre, alumno[i].carrera, &alumno[i].nota1, &alumno[i].nota2, &alumno[i].nota3);
        alumno[i].promedio = (alumno[i].nota1 + alumno[i].nota2 + alumno[i].nota3) / 3;
    }

    fclose(archivo);



    for (int i = 0; i < 4; i++)
    {
        if (alumno[i].promedio > promayor)
        {
            promayor = alumno[i].promedio;
        }
    }
    

    FILE *archivo_promedio = fopen("listapromedio.txt", "w");
    if (archivo_promedio == NULL)
    {
        printf("No se pudo crear el archivo listapromedio.txt.\n");
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        fprintf(archivo_promedio, "%s %s %.2f %.2f %.2f %.2f\n", alumno[i].nombre, alumno[i].carrera, alumno[i].nota1, alumno[i].nota2, alumno[i].nota3, alumno[i].promedio);
    }

    fclose(archivo_promedio);
    return 0;
}
