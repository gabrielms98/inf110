//Ler as dimensões de uma caixa e escrever seu volume
#include <iostream>
int main()
{
	int largura, altura, comprimento; // Dimensões 
	int volume;
	
	std::cout << "Escreva as dimenções, em cm, da caixa para saber seu volume!\n";
	std::cout << "Largura da caixa: ";
	std::cin >> largura;
	std::cout << "Altura da caixa: ";
	std::cin >> altura;
	std::cout << "Comprimento da caixa: ";
	std::cin >> comprimento;

	volume = largura*altura*comprimento;

	std::cout << "O volume da caixa é: " << volume << "cm³\n";
	std::cout << "OBRIGADO!\n" ;
	return 0;
}
	
	 
