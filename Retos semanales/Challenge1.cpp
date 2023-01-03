#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
 * Reto #1
 * �ES UN ANAGRAMA?
 * Fecha publicaci�n enunciado: 03/01/22
 * Fecha publicaci�n resoluci�n: 10/01/22
 * Dificultad: MEDIA
 *
 * Enunciado: Escribe una funci�n que reciba dos palabras (String) y retorne verdadero o falso (Boolean) seg�n sean o no anagramas.
 * Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
 * NO hace falta comprobar que ambas palabras existan.
 * Dos palabras exactamente iguales no son anagrama.
 *
 * Informaci�n adicional:
 * - Usa el canal de nuestro discord (https://mouredev.com/discord) "??reto-semanal" para preguntas, dudas o prestar ayuda a la acomunidad.
 * - Puedes hacer un Fork del repo y una Pull Request al repo original para que veamos tu soluci�n aportada.
 * - Revisar� el ejercicio en directo desde Twitch el lunes siguiente al de su publicaci�n.
 * - Subir� una posible soluci�n al ejercicio el lunes siguiente al de su publicaci�n.
 *
 */

string isAnagram (string fraseUno, string fraseDos);

int main (){
	cout << isAnagram("pepito", "Pipote") << endl;
	cout << isAnagram("Maria", "Mariana") << endl;
	cout << isAnagram("Enrique", "quieren") << endl;
	cout << isAnagram("Mora", "Mora") << endl;
}

string isAnagram (string fraseUno, string fraseDos) {
	if (fraseUno == fraseDos || fraseUno.length() != fraseDos.length()) return "falso";
	std::transform(fraseUno.begin(), fraseUno.end(), fraseUno.begin(), ::tolower);
	std::transform(fraseDos.begin(), fraseDos.end(), fraseDos.begin(), ::tolower);
	std::sort(fraseUno.begin(), fraseUno.end());
	std::sort(fraseDos.begin(), fraseDos.end());
	if (fraseUno == fraseDos) return "verdadero";
	else return "falso";
}