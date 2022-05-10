#include <iostream>

int main() {
  
  double pesos;
  double reals;
  double soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;
  
  std::cout << "Enter number of Colombian Reals: ";
	std::cin >> reals;
  
  std::cout << "Enter number of Colombian Soles: ";
	std::cin >> soles;

  //1 Mexican Peso = 0.053 United States Dollar
  //1 Brazilian Real = 0.27 United States Dollar
  //1 Sol = 0.30 United States Dollar
  
  dollars = (0.053 * pesos) + (0.27 * reals) + (0.30 * soles);
  std::cout << "US Dollars = $ " << dollars << "\n";
}