#include <iostream>
#include "archivos.h"
#include <map>
using namespace std;

void suma(){
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    
    for (int i = 0; i < 10; i++) {
        sum += numeros[i];
    }

   
    cout << "La suma de los elementos del array es: " << sum << endl;
}

void num_mayor(){
    int numeros[6] = {3, 8, 2, 9, 1, 6};
    int num_mayor = numeros[0];
    
    for(int i = 1; i < 6; i++) {
        if(numeros[i] > num_mayor) {
            num_mayor = numeros[i];
        }
    }
    
    cout << "El numero mayor es: " << num_mayor << endl;
}

void invertir(){
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
   int temp;
   
   // Imprimir array original
   cout << "Array original: ";
   for(int i = 0; i < 8; i++) {
      cout << array[i] << " ";
   }
   
   // Invertir elementos
   for(int i = 0; i < 4; i++) {
      temp = array[i];
      array[i] = array[7-i];
      array[7-i] = temp;
   }
   cout<<endl;
   
   // Imprimir array invertido
   cout << "Array invertido: ";
   for(int i = 0; i < 8; i++) {
      cout << array[i] << " ";
   }
   cout<<endl;
}

void suma2(){
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
   
   for(int i = 0; i < 10; i++) {
      sum += numeros[i];
   }
   
   cout << "La suma de los elementos del array es: " << sum << endl;
}

void num_frutas(){
    string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
    map<string, int> conteo;

    for(int i=0; i<9; i++) {
        conteo[frutas[i]]++;
    }

    for(auto const& fruta : conteo) {
        cout << fruta.first << ": " << fruta.second << endl;
    }
}