#include <iostream>
using namespace std;

/*
 * Reto #3
 * �ES UN N�MERO PRIMO?
 * Fecha publicaci�n enunciado: 17/01/22
 * Fecha publicaci�n resoluci�n: 24/01/22
 * Dificultad: MEDIA
 *
 * Enunciado: Escribe un programa que se encargue de comprobar si un n�mero es o no primo.
 * Hecho esto, imprime los n�meros primos entre 1 y 100.
 *
 * Informaci�n adicional:
 * - Usa el canal de nuestro discord (https://mouredev.com/discord) "??reto-semanal" para preguntas, dudas o prestar ayuda a la acomunidad.
 * - Puedes hacer un Fork del repo y una Pull Request al repo original para que veamos tu soluci�n aportada.
 * - Revisar� el ejercicio en directo desde Twitch el lunes siguiente al de su publicaci�n.
 * - Subir� una posible soluci�n al ejercicio el lunes siguiente al de su publicaci�n.
 *
 */

bool isPrime(int number) {

	if (number < 2 || (number % 2 == 0 && number != 2)) return false;

	for (int i = 3; i <= (number / 2); i += 2) {
		if (number % i == 0) return false;
	}

	return true;
}

void printPrime(int num) {
	for (int i = 1; i <= num; i++) {
		if (isPrime(i)) cout << i << endl;
	}
}