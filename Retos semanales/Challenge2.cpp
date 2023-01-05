#include <iostream>
using namespace std;

/*
 * Reto #2
 * LA SUCESI�N DE FIBONACCI
 * Fecha publicaci�n enunciado: 10/01/22
 * Fecha publicaci�n resoluci�n: 17/01/22
 * Dificultad: DIF�CIL
 *
 * Enunciado: Escribe un programa que imprima los 50 primeros n�meros de la sucesi�n de Fibonacci empezando en 0.
 * La serie Fibonacci se compone por una sucesi�n de n�meros en la que el siguiente siempre es la suma de los dos anteriores.
 * 0, 1, 1, 2, 3, 5, 8, 13...
 *
 * Informaci�n adicional:
 * - Usa el canal de nuestro discord (https://mouredev.com/discord) "??reto-semanal" para preguntas, dudas o prestar ayuda a la acomunidad.
 * - Puedes hacer un Fork del repo y una Pull Request al repo original para que veamos tu soluci�n aportada.
 * - Revisar� el ejercicio en directo desde Twitch el lunes siguiente al de su publicaci�n.
 * - Subir� una posible soluci�n al ejercicio el lunes siguiente al de su publicaci�n.
 *
 */

long fibonacci(long num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}
