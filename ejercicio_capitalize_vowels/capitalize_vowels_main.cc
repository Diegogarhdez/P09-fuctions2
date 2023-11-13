/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 09 2023
  * @brief this program This program change a caracter chain as the same word but this chain
  * has a capitar letter to vocals and lower letters for consonants. 
  * @bug There are no known bugs
  */

#include <iostream>
#include "capitalize_vowels.h"

int main() {
  std::string palabra_ingresada;
  std::cin >> palabra_ingresada;
  ChangeFuncion(palabra_ingresada);
  std::cout << palabra_ingresada << std::endl;

  return 0;
}

