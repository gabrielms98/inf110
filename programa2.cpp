//Programa 2: calculo da nota final e um candidato a monitoria
#include <iostream>
int main()
{
	int entrevista, curriculo, prova; // notas do candidato
	int total; // total de pontos

	// Leitura dos dados
	std::cout << "Escreva a nota da entrevista: " ;
	std::cin >> entrevista ;
	std::cout << "Escreva a nota do curriculo: " ;
	std::cin >> curriculo;
	std::cout << "Escreva a nota da prova!: " ;
	std::cin >> prova;

	// Calculo do resultado
	total = entrevista + curriculo + prova;
	
	std::cout << "Nota final do candidato: " << total << std::endl;
	return 0;
}
