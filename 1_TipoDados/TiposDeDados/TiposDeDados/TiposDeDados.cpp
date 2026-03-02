// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/**cout << "Estrutura de Dados - Fatec (2025/1)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	segundos = minutos * 60;

	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;
	cout << "Sua idade em segundos e:" << segundos << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls"); */



	/*--------EXERCÍCIO 1:----------------------------------- */
// Este exercício mostra os limites de int e short e demonstra overflow.
// Quando somamos INT_MAX + 1, o valor "dá a volta" e se torna INT_MIN.


		int soma;
		cout << "int  max = " << INT_MAX << "\n";
		cout << "int  min = " << INT_MIN << "\n";
		cout << "short max = " << SHRT_MAX << "\n";

		soma = INT_MAX + 1;

		cout << soma;
		cout << endl << endl;

		cout << "Qualquer tecla para continuar...";
		system("pause"); // somente no Windows
		system("cls");

		/*--------EXERCÍCIO 2- Conversão de Temperatura*---------*/

		double c, f, k;

		cout << "Escreva a temperatura que deseja converter: " << endl;
		cin >> c;

		f = c * 1.8 + 32;
		k = c + 273.15;

		cout << " Temperatura em Fahrenheit:   " << f << endl;
		cout << " Temperatura em Kelvin:   " << k << endl;


		cout << "Qualquer tecla para continuar...";
		system("pause"); // somente no Windows
		system("cls");
		/*--------EXERCÍCIO 3: Calculadora de Segundos -----------*/

		long d, h, m, s, sr;

		cout << "Digite a quantidade em segundos:" << endl;
		cin >> s;

		d = s / 86400;
		long resto = s % 86400;

		h = resto / 3600;
		resto = resto % 3600;

		m = resto / 60;
		sr = resto % 60;

		cout << "Dias: " << d << endl;
		cout << "Horas: " << h << endl;
		cout << "Minutos: " << m << endl;
		cout << "Segundos: " << sr << endl;

		cout << "Qualquer tecla para continuar...";
		system("pause"); // somente no Windows
		system("cls");

		/*EXERCÍCIO 4----- Ponteiro na Prática*/


		int numero = 10;

		cout << "Valor original da variavel: " << numero << endl;

		cout << "Endereco da variavel: " << &numero << endl;

		int* ponteiro = &numero;

		*ponteiro = *ponteiro * 2;

		cout << "Novo valor da variavel (dobro): " << numero << endl;



		cout << "Qualquer tecla para sair...";
		system("pause"); // somente no Windows
}

