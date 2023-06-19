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

    }alumno[5];
   

    for (int i = 0; i < 5; i++)
    {
        printf ("Escriba el nombre del alumno %d\n", i);
        gets (alumno[i].nombre);
        

        puts ("Nombre introducido:");
        puts (alumno[i].nombre);


        printf ("Escriba la direccion del alumno %d\n", i);
        gets (alumno[i].direccion);

        puts ("Direccion introducido:");
        puts (alumno[i].direccion);


        printf ("Escriba la carrera del alumno %d\n", i);
        gets (alumno[i].carrera);

        puts ("Carrera introducido:");
        puts (alumno[i].carrera);


        printf ("Escriba la edad del alumno %d\n", i);
        gets (alumno[i].edad);

        puts ("Edad introducido:");
        puts (alumno[i].edad);


        printf ("Escriba el promedio del alumno %d\n", i);
        gets (alumno[i].promedio);

        puts ("Pomedio introducido:");
        puts (alumno[i].promedio);
        
    }
    
    return 0;

}
