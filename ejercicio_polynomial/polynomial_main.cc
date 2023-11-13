/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 10 2023
  * @brief This program calcule a fuction.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include <cmath>
#include "polynomial.h"

int main() {
  int numero_componentes;
  std::cin >> numero_componentes;
  std::vector<double> vector1(numero_componentes);
  for (int i = 0; i < numero_componentes; i++) {
    std::cin >> vector1[i];
  }
  int valor1;
  std::cin >> valor1;
  int resultado = CalcularFuncion(vector1, valor1);
  std::cout << resultado << std::endl;
return 0;
}
