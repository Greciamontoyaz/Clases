#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int* puntero_0 = nullptr; //inicialización de puntero
  int* puntero_1 = nullptr;
  
  int variable_0 = 10; //varible que se  le asignara al puntero_0
  int variable_1 = 20; //varible que se  le asignara al puntero_1

  puntero_0 = &variable_0; // El operador & se utiliza para obtener la dirección de memoria de una variable.
  puntero_1 = &variable_1;

  int diferencia = puntero_1 - puntero_0; // Calcula la diferencia entre los punteros puntero_0 y puntero_1

  cout<<"La diferencia entre los punteros: "<<diferencia<<endl;


  // Declarar un arreglo de enteros
  int numeros[5] = {10, 20, 30, 40, 50};

  // Recorrer el arreglo usando un puntero
  for (int i = 0; i < 5; i++) {
    int* puntero = numeros + i; // Obtener el puntero al elemento actual del arreglo
    cout << *puntero << " "; // Imprimir el valor del elemento actual del arreglo
  }

  cout << endl;

  // Acceder a un elemento específico del arreglo usando un puntero
  int* punteroElemento3 = numeros + 2;
  cout << "El valor del tercer elemento del arreglo es: " << *punteroElemento3 << endl;


  return 0;
}