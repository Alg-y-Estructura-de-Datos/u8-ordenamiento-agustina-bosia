#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include <iostream>
using namespace std;

// M�todo para ordenar un arreglo utilizando el algoritmo Bubble //Sort
// Par�metros:
//   arr: arreglo de enteros a ordenar
//   size: tama�o del arreglo
// 
// Funcionamiento:
//   El algoritmo Bubble Sort compara pares consecutivos de //elementos en el arreglo
//   y los intercambia si est�n en el orden incorrecto (en este //caso, si el elemento
//   de la izquierda es mayor que el de la derecha). Despu�s de //cada pasada completa,
//   el elemento m�s grande "burbujea" hasta su posici�n final.
// 
// Optimizaci�n:
//   El algoritmo incluye una optimizaci�n con la variable //'seguir'. Si en una pasada
//   no se realiza ning�n intercambio, significa que el arreglo ya //est� ordenado y el
//   bucle externo puede finalizar de inmediato, ahorrando iteraciones innecesarias.
//
// Complejidad Temporal:
//   Peor caso: O(n^2), cuando el arreglo est� en orden inverso.
//   Mejor caso: O(n), cuando el arreglo ya est� ordenado (gracias //a la optimizaci�n de 'seguir').
//
//
void bubbleSort(int *arr, int size) {
    int aux;
    bool seguir = true;

    for (int i = 0; i < size - 1 && seguir; i++) {
        seguir = false;
        for (int j = 0; j < size - i - 1; j++) // porque va al fondo, ya esta en el lugar que le corresponde
        {
            if (arr[j] > arr[j + 1]) {
                seguir = true;
                aux = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

#endif // BUBBLESORT_H_