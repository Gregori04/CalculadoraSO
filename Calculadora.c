#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, resultado;
    int opcion;

    do {
        printf("\nCalculadora\n");
        printf("1. Ingresar número\n");
        printf("2. Seleccionar operación\n");
        printf("3. Limpiar último número\n");
        printf("4. Limpiar todo y salir\n");
        printf("Seleccione una opción (1-4): ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un número: ");
                scanf("%f", &num1);
                break;
            case 2:
                printf("\nSeleccione una operación:\n");
                printf("5. +\n");
                printf("6. -\n");
                printf("7. *\n");
                printf("8. /\n");
                printf("9. Seno\n");
                printf("10. Coseno\n");
                printf("11. Tangente\n");
                printf("12. Potencia (elevado a x)\n");
                printf("Seleccione una opción (5-12): ");
                int operacion;
                scanf("%d", &operacion);

                switch (operacion) {
                    case 5:
                        printf("Ingrese otro número: ");
                        scanf("%f", &num2);
                        resultado = num1 + num2;
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    case 6:
                        printf("Ingrese otro número: ");
                        scanf("%f", &num2);
                        resultado = num1 - num2; // Resta
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    case 9:
                        resultado = sin(num1); // Seno
                        printf("Seno: %.2f\n", resultado);
                        break;
                    case 10:
                        resultado = cos(num1); // Coseno
                        printf("Coseno: %.2f\n", resultado);
                        break;
                    case 11:
                        resultado = tan(num1); // Tangente
                        printf("Tangente: %.2f\n", resultado);
                        break;
                    case 12:
                        printf("Ingrese el exponente: ");
                        scanf("%f", &num2);
                        resultado = pow(num1, num2); // Potencia
                        printf("Resultado: %.2f\n", resultado);
                        break;
                    default:
                        printf("Operación no válida\n");
                        break;
                }
                break; 
            default:
                printf("Opción no válida\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}
