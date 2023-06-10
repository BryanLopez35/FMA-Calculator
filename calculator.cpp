#include <stdio.h>
#include <stdlib.h>

// Función para calcular la fuerza dado la masa y aceleración
float calcularFuerza(float masa, float aceleracion)
{
    return masa * aceleracion;
}

// Función para calcular la masa dado la fuerza y aceleración
float calcularMasa(float fuerza, float aceleracion)
{
    return fuerza / aceleracion;
}

// Función para calcular la aceleración dado la fuerza y masa
float calcularAceleracion(float fuerza, float masa)
{
    return fuerza / masa;
}

// Función para mostrar el menú de opciones
void mostrarMenu()
{
    printf("¿Qué desea calcular?\n");
    printf("1. Fuerza\n");
    printf("2. Masa\n");
    printf("3. Aceleración\n");
    printf("4. Salir\n");
}

// Función para obtener la opción seleccionada por el usuario
int obtenerOpcion()
{
    int opcion;
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función para limpiar la pantalla
void limpiarPantalla()
{
    system("clear");
}

// Función para calcular la fuerza mediante interacción con el usuario
void calcularFuerzaMenu()
{
    float masa, aceleracion;
    printf("Ingrese la masa: ");
    scanf("%f", &masa);
    printf("Ingrese la aceleración: ");
    scanf("%f", &aceleracion);
    float fuerza = calcularFuerza(masa, aceleracion);
    printf("La fuerza es: %.2f N\n", fuerza);
}

// Función para calcular la masa mediante interacción con el usuario
void calcularMasaMenu()
{
    float fuerza, aceleracion;
    printf("Ingrese la fuerza: ");
    scanf("%f", &fuerza);
    printf("Ingrese la aceleración: ");
    scanf("%f", &aceleracion);
    float masa = calcularMasa(fuerza, aceleracion);
    printf("La masa es: %.2f Kg\n", masa);
}

// Función para calcular la aceleración mediante interacción con el usuario
void calcularAceleracionMenu()
{
    float fuerza, masa;
    printf("Ingrese la fuerza: ");
    scanf("%f", &fuerza);
    printf("Ingrese la masa: ");
    scanf("%f", &masa);
    float aceleracion = calcularAceleracion(fuerza, masa);
    printf("La aceleración es: %.2f m/s^2\n", aceleracion);
}

int main()
{
    int respuesta = 1;

    do
    {
        mostrarMenu();
        int opcion = obtenerOpcion();

        switch (opcion)
        {
        case 1:
            limpiarPantalla();
            printf("Calculando Fuerza...\n");
            calcularFuerzaMenu();
            break;
        case 2:
            limpiarPantalla();
            printf("Calculando Masa...\n");
            calcularMasaMenu();
            break;
        case 3:
            limpiarPantalla();
            printf("Calculando Aceleración...\n");
            calcularAceleracionMenu();
            break;
        case 4:
            respuesta = 0;
            break;
        default:
            limpiarPantalla();
            printf("Opción inválida. Por favor, seleccione una opción válida.\n");
            break;
        }

        if (opcion != 4 && respuesta != 0)
        {
            int seleccion;

            do
            {
                printf("¿Desea calcular otra vez?\n");
                printf("1. Si\n");
                printf("2. No\n");
                printf("Ingrese una opción: ");
                scanf("%d", &seleccion);

                if (seleccion < 1 || seleccion > 2)
                {
                    printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                }
            } while (seleccion < 1 || seleccion > 2);

            limpiarPantalla();

            respuesta = (seleccion == 1) ? 1 : 0;
        }

    } while (respuesta == 1);

    printf("Saliendo...\n");
    return 0;
}
