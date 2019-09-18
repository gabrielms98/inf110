// Programa para ler o salario base , o valor da hora extra e o numero de horas extra, para calcular e imprimir o resultado.
#include <iostream>
int main()
{
	int salariob, valorhorax, horax;
	int salariototal;

	std::cout << "FERRAMENTA DE CALCULO DO SALARIO TOTAL!\n";
	std::cout << "Digite seu salario base: ";
	std::cin >> salariob;
	std::cout << "Digite o valor da hora extra: ";
	std::cin >> valorhorax;
	std::cout << "Digite o número de horas extras trabalhadas: ";
	std::cin >> horax;

	salariototal = valorhorax*horax + salariob;

	std::cout << "O salário total é: " << salariototal << "\n";
	return 0;
}
