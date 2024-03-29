/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov XX 2023
  * @brief This program calcule a approximation of square root. 
  * @bug There are no known bugs
  */


#include <iostream>
#include "approximate_root.h"

int main() {
  double numero;
  std::cin >> numero;
  if (numero < 0) {
   return 0;
  }
  double resultado = RaizCuadrada(numero);
  std::cout << resultado << std::endl;
}
