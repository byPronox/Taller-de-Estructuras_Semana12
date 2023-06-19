#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World");
    struct Alumno
    {
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;

    }a1 = {"Juan","Centro","Software",20,9.1};
   

    printf("Los datos del alumno son: \n");
    printf("%s %s %s %d %f",a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    char frase [100];
    printf ("Escriba una frase") ;
    gets (frase);

    puts ("Frase introducida:");
    puts (frase);
    return 0;
}
